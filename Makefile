main: main.o time.o
	g++ -o main main.o time.o

main.o: main.cpp time.h time_class.h movie_class.h timeslot_class.h

time.o: time.cpp time.h movie_class.h timeslot_class.h

tests: tests.o time.o
	g++ -o tests tests.o time.o

tests.o: tests.cpp doctest.h time.h

clean:
	rm -f main main.o time.o
