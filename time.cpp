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

Time addMinutes(Time time0, int min){
	Time time1;
	if(time0.m + min > 60){
		time1.h = time0.h + 1;
		time1.m = (time0.m + min) - 60;
	}
	else{
		time1.h = time0.h;
		time1.m = time0.m + min;
	}

	return time1;
}
