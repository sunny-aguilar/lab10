# File: 	makefile
# Author: 	Sandro Aguilar
# Date: 	March 11, 2019
# Description:	Makefile for Lab 10

# Variables to control Makefile operation

CXX = g++

CXXFLAGS = -Wall
CXXFLAGS += -g
CXXFLAGS += -std=c++0x

OBJECTS = main.o
OBJECTS += recursiveFibonacci.o
OBJECTS += nonrecursiveFibonacci.o

HPPs = menu.hpp
HPPs += recursiveFibonacci.hpp
HPPs += nonrecursiveFibonacci.hpp

CPPs = main.cpp
CPPs += recursiveFibonacci.cpp
CPPs += nonrecursiveFibonacci.cpp


# Targets needed to bring the executable up to date
Lab10: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o Lab10 $(OBJECTS)

main.o: main.cpp $(HPPs)
	$(CXX) $(CXXFLAGS) -c main.cpp

recursiveFibonacci.o: recursiveFibonacci.hpp

nonrecursiveFibonacci.o: nonrecursiveFibonacci.hpp


# Clean-up operations
clean:
	rm Lab10 *.o

debug:
	valgrind -v --leak-check=full --show-leak-kinds=all --track-origins=yes ./Lab10

zip:
	zip -D Lab10_Aguilar_Sandro.zip $(CPPs) $(HPPs) $(TXTS) makefile *.txt *.pdf
