CXX=g++
CXXFLAGS=-std=c++20 -O3

.PHONY: all clean

all: DIR bin/test_dynamic_array

DIR:
	mkdir -p ./bin

bin/test_dynamic_array: tests/DynamicArray.cc
	$(CXX) $(CXXFLAGS) -Iinclude -o $@ $^

clean :
	rm -rvf bin/*
