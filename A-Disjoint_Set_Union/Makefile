CXX = g++
CXXFLAGS = -std=c++23 -O2 -Wall -I..
SRCS = main.cpp
TARGET = main

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm -f $(TARGET)
