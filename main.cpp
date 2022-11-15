#include <iostream>
#include "funcs.h"

int main() {
	std::cout << minutesSinceMidnight({0,30}) << std::endl;
	std::cout << minutesUntil( {10, 30}, {13, 40} ) << std::endl;

	return 0;
}
