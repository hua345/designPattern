all:main.o

main.o: main.cpp  Context.o ConcreteStateA.o ConcreteStateB.o
	clang++ main.cpp Context.o ConcreteStateA.o ConcreteStateB.o -o main.o -std=c++11

Context.o:Context.cpp Context.h State.h
	clang++ -c Context.cpp -o Context.o -std=c++11

ConcreteStateA.o:ConcreteStateA.cpp ConcreteStateA.h Context.o
	clang++ -c  ConcreteStateA.cpp Context.o -o ConcreteStateA.o -std=c++11

ConcreteStateB.o:ConcreteStateB.cpp ConcreteStateB.h Context.o
	clang++ -c  ConcreteStateB.cpp Context.o -o ConcreteStateB.o -std=c++11

clean:
	rm -rf *.o
