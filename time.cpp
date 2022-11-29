#include <iostream>
#include <string>
#include "time.h"

std::string getTime(Time time) {
    return std::to_string(time.h) + ":" + std::to_string(time.m);
}

int minutesSinceMidnight(Time time) { 
	return time.h * 60 + time.m;
}

int minutesUntil(Time earlier, Time later) {
	return ((later.h - earlier.h) * 60) + (later.m - earlier.m);	
}

Time addMinutes(Time time0, int min){
	Time time = {0,0};
	time.h = time0.h + ((time0.m+min)/60);
	time.m = (time0.m+min)%60;
	
	return time;
}
