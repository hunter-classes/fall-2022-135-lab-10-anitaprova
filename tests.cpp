#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "time.h"
#include "movie.h"
#include "timeslot.h"

TEST_CASE("TASK A") {
	CHECK(minutesSinceMidnight({11,59}) == 719);
	CHECK(minutesSinceMidnight({4,2}) == 242);
	CHECK(minutesSinceMidnight({6,48}) == 408);

	CHECK(minutesUntil( {10, 30}, {13, 40} ) == 190);
	CHECK(minutesUntil( {8, 18}, {14, 32} ) == 374);
	CHECK(minutesUntil( {5, 7}, {20, 0} ) == 893);
}

TEST_CASE("TASK B") {
	CHECK(getTime(addMinutes({8, 10}, 75)) == "9:25");
	CHECK(getTime(addMinutes({0, 0}, 54)) == "0:54");
	CHECK(getTime(addMinutes({1, 53}, 16)) == "2:9");
}

TEST_CASE("TASK C") {
	Movie movie1 = {"A Silent Voice", DRAMA, 130};
        Movie movie2 = {"Your Name", DRAMA, 106};
        Movie movie3 = {"Train to Busan", ACTION, 118};

	TimeSlot t1 = {movie1, {5, 25}};
        TimeSlot t2 = {movie2, {1, 8}};
        TimeSlot t3 = {movie3, {23, 55}};

	CHECK(getTimeSlot(t1) == "A Silent Voice DRAMA (130 min) [starts at 5:25, ends by 7:35]");
	CHECK(getTimeSlot(t2) == "Your Name DRAMA (106 min) [starts at 1:8, ends by 2:54]");
	CHECK(getTimeSlot(t3) == "Train to Busan ACTION (118 min) [starts at 23:55, ends by 25:53]");
}

TEST_CASE("TASK D") {
	Movie movie1 = {"A Silent Voice", DRAMA, 130};
        Movie movie2 = {"Your Name", DRAMA, 106};
	Movie movie3 = {"Mean Girls",COMEDY, 97};

	TimeSlot t1 = {movie1, {5, 25}};
        TimeSlot t2 = {movie2, {1, 8}};
	TimeSlot t3 = {movie3, {16, 56}};

	CHECK(getTimeSlot(scheduleAfter(t1,movie2)) == "Your Name DRAMA (106 min) [starts at 7:35, ends by 9:21]");
	CHECK(getTimeSlot(scheduleAfter(t2,movie1)) == "A Silent Voice DRAMA (130 min) [starts at 2:54, ends by 5:4]");
	CHECK(getTimeSlot(scheduleAfter(t3,movie3)) == "Mean Girls COMEDY (97 min) [starts at 18:33, ends by 20:10]");
}

TEST_CASE("TASK E") {
	Movie movie1 = {"A Silent Voice", DRAMA, 130};
        Movie movie2 = {"Your Name", DRAMA, 106};
	Movie movie3 = {"Train to Busan", ACTION, 118};
	Movie movie4 = {"Mean Girls",COMEDY, 97};

	TimeSlot t1 = {movie1, {15, 4}};
        TimeSlot t2 = {movie2, {11, 19}};
	TimeSlot t3 = {movie3, {15, 40}};
	TimeSlot t4 = {movie4, {14, 44}};

	CHECK(timeOverlap(t1, t2) == false);
	CHECK(timeOverlap(t4, t2) == false);
	CHECK(timeOverlap(t2, t3) == false);	
	CHECK(timeOverlap(t1, t3) == true);
	CHECK(timeOverlap(t4, t1) == true);
	CHECK(timeOverlap(t4, t3) == true);	

}
