#pragma once
#include <iostream>
#include "time_class.h"
#include "movie_class.h"

class TimeSlot { 
public: 
    Movie movie;     // what movie
    Time startTime;  // when it starts
};
