#ifndef CONCRETESUBJECT_H
#define CONCRETESUBJECT_H
#include "Subject.h"

class ConcreteSubject : public Subject
{
public:
    ConcreteSubject();
    virtual ~ConcreteSubject();
    virtual int getState();
    virtual void setState(int i);
private:
    int m_state;
};

#endif //CONCRETESUBJECT_H
