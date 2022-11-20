#pragma once 
#include <iostream>
#include <string>
#include "time_class.h"
#include "movie_class.h"
#include "timeslot_class.h"

std::string getTime(Time time);
int minutesSinceMidnight(Time time);
int minutesUntil(Time earlier, Time later);
Time addMinutes(Time time0, int min);
std::string getMovie(Movie mv);
std::string getTimeSlot(TimeSlot ts);
TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie);
bool timeOverlap(TimeSlot ts1, TimeSlot ts2);
