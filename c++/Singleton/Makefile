all:safeMain helloworld

safeMain: SingletonMutex.o mainMutex.cpp
	g++ SingletonMutex.o mainMutex.cpp -o safeMain -std=c++11 -lpthread

helloworld:Singleton.o main.cpp
	g++ Singleton.o main.cpp -o helloworld -std=c++11 -lpthread

Singleton.o:Singleton.cpp Singleton.h
	g++ -c Singleton.cpp -o Singleton.o -std=c++11 -lpthread

SingletonMutex.o:SingletonMutex.cpp SingletonMutex.h
	g++ -c SingletonMutex.cpp -o SingletonMutex.o -std=c++11 -lpthread
clean:
	rm -rf *.o helloworld safeMain
