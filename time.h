#pragma once 
#include <iostream>
#include <string>

class Time {
public:
    int h;
    int m;
};

std::string getTime(Time time);
int minutesSinceMidnight(Time time);
int minutesUntil(Time earlier, Time later);
Time addMinutes(Time time0, int min);
