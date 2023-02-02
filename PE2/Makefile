CXX = g++
CXXFLAGS	= -std=c++17 -Wall
CXXTESTFLAGS = --coverage # can be used to generate files that help calculate unit test coverage
CXXGDB = -ggdb

all: test

clean:
	rm test #Circle.o (because you can't recompile this one!)

test: Circle.o test.cpp
	$(CXX) $(CXXFLAGS) test.cpp Circle.o -o test

main: Circle.o main.cpp
	$(CXX) $(CXXFLAGS) main.cpp Circle.o -o main

Circle.o: Circle.cpp
	$(CXX) $(CXXFLAGS) -c Circle.cpp
