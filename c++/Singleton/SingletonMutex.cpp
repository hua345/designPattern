#include "SingletonMutex.h"
//静态成员初始化
atomic<SingletonMutex*> SingletonMutex::g_instance { nullptr };
mutex SingletonMutex::m_mutex;

SingletonMutex::SingletonMutex():m_count(0){}

SingletonMutex::~SingletonMutex(){
	delete g_instance;
}


SingletonMutex* SingletonMutex::getInstance(){
	if (nullptr == g_instance )
	{
		lock_guard<std::mutex> lock{ m_mutex };
		if (nullptr == g_instance){
			g_instance = new SingletonMutex();
		}
	}
	return  g_instance;
}


void SingletonMutex::singletonOperation(){
  ++m_count;
	cout << "singletonOperation: "<< m_count << endl;
}
