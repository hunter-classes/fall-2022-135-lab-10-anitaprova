/*
Author: Anita Prova
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 10

Creates a time, movie and timeslot class.
*/

#include <iostream>
#include "time.h"
#include "movie.h"
#include "timeslot.h"

int main() {
	//TASK A
	std::cout << minutesSinceMidnight({0,30}) << std::endl;
	std::cout << minutesUntil( {10, 30}, {13, 40} ) << std::endl;

	//TASK B
	std::cout << getTime(addMinutes({8, 10}, 75)) << std::endl;

	//TASK C
	Movie movie1 = {"Back to the Future", COMEDY, 116};
	Movie movie2 = {"Black Panther", ACTION, 134};
	Movie movie3 = {"A Silent Voice", DRAMA, 130};
	Movie movie4 = {"Your Name", DRAMA, 106};
	Movie movie5 = {"Train to Busan", ACTION, 118};
	
	TimeSlot morning = {movie1, {9, 15}};  
	TimeSlot daytime = {movie2, {12, 15}}; 
	TimeSlot evening = {movie2, {16, 45}};
	
	std::cout << getTimeSlot(morning) << std::endl;
	std::cout << getTimeSlot(daytime) << std::endl;	
	std::cout << getTimeSlot(evening) << std::endl;

	
	//TASK D
	TimeSlot t = {movie3, {14,10}};
	std::cout << getTimeSlot(scheduleAfter(t, movie4)) << std::endl;

	return 0;
}
