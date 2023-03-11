OBJECTS=List.o main.o Node.o OList.o
all: $(OBJECTS)
	g++ -g $(OBJECTS) -o main

main: $(OBJECTS)
	g++ -g $(OBJECTS) -o main

tests: tests.o List.o Node.o OList.o
	g++ -g tests.o List.o Node.o OList.o doctest.h -o tests
main.o: main.cpp OList.h List.h Node.h
tests.o: tests.cpp doctest.h
List.o: List.cpp List.h Node.h
OList.o: OList.cpp OList.h Node.h
Node.o: Node.cpp Node.h
clean:
	rm main tests *.o
