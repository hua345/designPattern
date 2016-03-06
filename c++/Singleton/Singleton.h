#ifndef SINGLETON_H_
#define SINGLETON_H_

class Singleton
{
public:
  ~Singleton();

  static Singleton* getInstance();
  void singletonOperation();
private:
  Singleton();
  static Singleton * g_instance;
  int m_count;
};

#endif //SINGLETON_H
