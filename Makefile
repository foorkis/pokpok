CFLAGS=-std=c++11
CPP=g++

all: main.cpp inheritance.cpp
	$(CPP) -c main.cpp -o main.o $(CFLAGS)
	$(CPP) -c inheritance.cpp -o inheritance.o $(CFLAGS)
	$(CPP) main.o inheritance.o -o foo
clean:
	rm *.o foo
