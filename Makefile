main: main.o time.o
	g++ -o main main.o time.o

main.o: main.cpp time.h

time.o: time.cpp time.h

tests: test.o
	g++ -o tests tests.o 

clean:
	rm -f main main.o time.o
