#include <iostream>

class Time { 
public:
    int h;
    int m;
};

void printTime(Time time) {
    std::cout << time.h << ":" << time.m;
}

int minutesSinceMidnight(Time time) { 
	return time.h * 60 + time.m;
}

int minutesUntil(Time earlier, Time later) {
	return ((later.h - earlier.h) * 60) + (later.m - earlier.m);	
}
