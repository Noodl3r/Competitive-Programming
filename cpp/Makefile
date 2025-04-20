# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -std=c++17

# All source files matching your pattern
SRC = $(wildcard *prob.cpp)

# Strip the .cpp to get binary names
BIN = $(basename $(SRC))

# Default target: build all
all: $(BIN)

# Rule to compile each binary
%: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

# Clean up binaries
clean:
	rm -f $(BIN)

