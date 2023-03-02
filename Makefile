OBJECTS=List.o main.o Node.o
all: $(OBJECTS)
	g++ -g -o main $(OBJECTS)

main: $(OBJECTS)
	g++ -g -o main $(OBJECTS)

main.o: main.cpp List.h Node.h
List.o: List.cpp List.h Node.h
Node.o: Node.cpp Node.h
clean:
	rm main node.o list.o
