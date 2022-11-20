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

	return 0;
}
