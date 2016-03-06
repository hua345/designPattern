#include "Singleton.h"
#include <iostream>
using namespace std;

Singleton * Singleton::g_instance = NULL;
Singleton::Singleton():m_count(0){}

Singleton::~Singleton(){
	delete g_instance;
}


Singleton* Singleton::getInstance(){
	if (g_instance == nullptr)
	{
		g_instance = new Singleton();
	}

	return  g_instance;
}


void Singleton::singletonOperation(){
  ++m_count;
	cout << "singletonOperation: "<< m_count << endl;
}
