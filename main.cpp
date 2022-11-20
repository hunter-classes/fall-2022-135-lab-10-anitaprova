/*
Author: Anita Prova
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 10

Creates a time, movie and timeslot class.
*/

#include <iostream>
#include "time.h"
#include "time_class.h"
#include "movie_class.h"
#include "timeslot_class.h"

int main() {
	//TASK A
	std::cout << minutesSinceMidnight({0,30}) << std::endl;
	std::cout << minutesUntil( {10, 30}, {13, 40} ) << std::endl;

	//TASK B
	std::cout << getTime(addMinutes({8, 10}, 75)) << std::endl;

	//TASK C
	Movie movie1 = {"Back to the Future", COMEDY, 116};
	Movie movie2 = {"Black Panther", ACTION, 134};
	
	TimeSlot morning = {movie1, {9, 15}};  
	TimeSlot daytime = {movie2, {12, 15}}; 
	TimeSlot evening = {movie2, {16, 45}};
	
	std::cout << getTimeSlot(morning) << std::endl;
	std::cout << getTimeSlot(daytime) << std::endl;	
	std::cout << getTimeSlot(evening) << std::endl;

	return 0;
}
