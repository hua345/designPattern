#ifndef SINGLETON_THREAD_SAFE_H_
#define SINGLETON_THREAD_SAFE_H_

#include <iostream>
#include <thread>
#include <mutex>
#include <atomic>

using namespace std;
class SingletonMutex
{
public:
  ~SingletonMutex();

  static SingletonMutex* getInstance();
  void singletonOperation();
private:
  SingletonMutex();
  static atomic<SingletonMutex*> g_instance;
  static mutex m_mutex;
  int m_count;

};

#endif //SINGLETON_THREAD_SAFE_H_
