#include <iostream>
#include <string>
#include "time.h"
#include "movie_class.h"
#include "timeslot_class.h"

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

std::string getMovie(Movie mv){
    std::string g;
    switch (mv.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    return mv.title + " " + g + " (" + std::to_string(mv.duration) + " min)";
}

std::string getTimeSlot(TimeSlot ts) {
	return getMovie(ts.movie) + " [starts at " + getTime(ts.startTime) + ", ends by " + getTime(addMinutes(ts.startTime, ts.movie.duration)) + "]"; 
}

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie) {
	TimeSlot nextTimeSlot = {nextMovie, addMinutes(ts.startTime, nextMovie.duration)};
	return nextTimeSlot;
}

bool timeOverlap(TimeSlot ts1, TimeSlot ts2){
	return true;	
}
