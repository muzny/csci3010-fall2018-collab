CXX = g++

CXXFLAGS	= -std=c++11 -ggdb -Wall
CXXTESTFLAGS = --coverage

all: test

clean:
	rm test FunMath.o

test: FunMath.o test.cpp
	$(CXX) $(CXXFLAGS) test.cpp FunMath.o -o test

FunMath.o: FunMath.cpp
	$(CXX) $(CXXFLAGS) -c FunMath.cpp

