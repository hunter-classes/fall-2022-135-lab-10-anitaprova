#include <iostream>
#include <string>
#include "time.h"
#include "movie.h"
#include "timeslot.h"

std::string getTimeSlot(TimeSlot ts) {
        return getMovie(ts.movie) + " [starts at " + getTime(ts.startTime) + ", ends by " + getTime(addMinutes(ts.startTime, ts.movie.duration)) + "]";
}

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie) {
        TimeSlot nextTimeSlot = {nextMovie, addMinutes(ts.startTime, ts.movie.duration)};
        return nextTimeSlot;
}

bool timeOverlap(TimeSlot ts1, TimeSlot ts2){
        int d = 0; //interval between starting times
        if(minutesUntil(ts1.startTime, ts2.startTime) > 0){ //if its positive then ts1 is earlier
                d = minutesUntil(ts1.startTime, ts2.startTime);
                if(ts1.movie.duration > d)
                {
                        return true;
                }
                else {
                        return false;
                }
        }
        else{
                d = minutesUntil(ts2.startTime, ts1.startTime);
                if(ts2.movie.duration > d) {
                        return true;
                }
                else {
                        return false;
                }
        }

}
