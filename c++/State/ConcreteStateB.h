#ifndef CONCRETESTATEB_H
#define CONCRETESTATEB_H

#include "State.h"
#include <stdlib.h>

class ConcreteStateB: public State
{
public:
    virtual ~ConcreteStateB(){};
    
    static State* getInstance();
    virtual void handle(Context* c);
private:
    ConcreteStateB(){};
    static State* m_pState;
};

#endif //CONCRETESTATEA_H
