#include <iostream>
#include "SingletonMutex.h"
#include <condition_variable>
using namespace std;
std::mutex mtx;
std::condition_variable cv;
bool ready = false;

void print_id (SingletonMutex* instance, int index) {
  std::unique_lock<std::mutex> lck(mtx);
  while (!ready) cv.wait(lck);
  // ...
  cout << "thread : "<< index << endl;
  instance->singletonOperation();
}

void go() {
  std::unique_lock<std::mutex> lck(mtx);
  ready = true;
  cv.notify_all();
}

int main(int argc, char *argv[])
{
	const int LENGTH = 10;
    std::thread threads[LENGTH];
	for (int i = 0; i < LENGTH; ++i)
	{
		threads[i] = std::thread(print_id, SingletonMutex::getInstance(), i);
	}
	//thread ready to race;
	go();
	for (auto &th:threads) th.join();

	std::cout << "hello world" << std::endl;
	return 0;
}
