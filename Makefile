main: main.o funcs.o
	g++ -o main main.o funcs.o

main.o: main.cpp funcs.h

funcs.o: funcs.cpp funcs.h

tests: test.o
	g++ -o tests tests.o 

clean:
	rm -f main main.o funcs.o
