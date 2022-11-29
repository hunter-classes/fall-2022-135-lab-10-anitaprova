main: main.o time.o movie.o timeslot.o
	g++ -o main main.o time.o movie.o timeslot.o

main.o: main.cpp time.h movie.h timeslot.h

time.o: time.cpp time.h

movie.o: movie.cpp movie.h

timeslot.o: timeslot.cpp timeslot.h

tests: tests.o time.o movie.o timeslot.o
	g++ -o tests tests.o time.o movie.o timeslot.o

tests.o: tests.cpp doctest.h time.h movie.h timeslot.h

clean:
	rm -f main tests main.o tests.o time.o movie.o timeslot.o
