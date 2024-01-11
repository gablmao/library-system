CXX = g++
CXXFLAGS = -Wall -Wextra -Wpedantic

main: main.cpp person.o
	$(CXX) $(CXXFLAGS) -o $@ $^

person.o: person.h
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean:
	$(RM) *.0 main