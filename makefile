OBJECTS=main.o heapsort.o
TESTOBJECTS=tests.o heapsort.o doctest.h
LDFLAGS=
CXXFLAGS=

main: $(OBJECTS)
	g++ -o main $(OBJECTS)
tests: $(TESTOBJECTS)
	g++ -o tests $(TESTOBJECTS)
tests.o: tests.cpp doctest.h heapsort.h

main.o: main.cpp heapsort.h

heapsort.o: heapsort.cpp heapsort.h


clean:
	rm -f $(OBJECTS) tests.o