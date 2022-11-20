main: main.o time.o
	g++ -o main main.o time.o

main.o: main.cpp time.h time_class.h movie_class.h timeslot_class.h

time.o: time.cpp time.h movie_class.h timeslot_class.h

tests: test.o
	g++ -o tests tests.o 

clean:
	rm -f main main.o time.o
