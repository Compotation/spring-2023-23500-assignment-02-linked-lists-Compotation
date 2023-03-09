OBJECTS=List.o main.o Node.o Olist.o
all: $(OBJECTS)
	g++ -g -o main $(OBJECTS)

main: $(OBJECTS)
	g++ -g -o main $(OBJECTS)

tests: tests.o List.o Node.o OList.o
	g++ -g -o tests tests.o List.o Node.o OList.o doctest.h
main.o: main.cpp OList.h List.h Node.h
tests.o: tests.cpp doctest.h
List.o: List.cpp List.h Node.h
OList.o: OList.cpp OList.h Node.h
Node.o: Node.cpp Node.h
clean:
	rm main *.o
