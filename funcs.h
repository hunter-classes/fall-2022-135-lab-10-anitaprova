#pragma once 
#include <iostream>

class Time { 
public:
    int h;
    int m;
};

void printTime(Time time);
int minutesSinceMidnight(Time time);
int minutesUntil(Time earlier, Time later);
