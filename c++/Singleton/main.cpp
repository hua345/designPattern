#include <iostream>
#include "Singleton.h"
using namespace std;

int main(int argc, char *argv[])
{
	Singleton * sg = Singleton::getInstance();

	sg->singletonOperation();
	sg->singletonOperation();
  std::cout << "hello world" << std::endl;
	return 0;
}
