CXX = g++
CXXFLAGS = -std=c++23 -O2 -Wall -I..
SRCS = main.cpp
TARGET = a.out

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm -f $(TARGET)
