all:main.o

main.o: main.cpp Subject.o Obeserver.o ConcreteSubject.o ConcreteObeserver.o
	g++ main.cpp Subject.o Obeserver.o ConcreteSubject.o ConcreteObeserver.o -o main.o -std=c++11

Subject.o:Subject.cpp Subject.h
	g++ -c Subject.cpp -o Subject.o -std=c++11

Obeserver.o:Obeserver.cpp Obeserver.h
	g++ -c Obeserver.cpp -o Obeserver.o -std=c++11

ConcreteSubject.o:Subject.o ConcreteSubject.cpp ConcreteSubject.h
	g++ -c Subject.o ConcreteSubject.cpp -o ConcreteSubject.o -std=c++11

ConcreteObeserver.o:Obeserver.o ConcreteObeserver.cpp ConcreteObeserver.h
	g++ -c Obeserver.o ConcreteObeserver.cpp -o ConcreteObeserver.o -std=c++11

clean:
	rm -rf *.o
