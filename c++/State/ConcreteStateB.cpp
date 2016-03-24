#include "ConcreteStateA.h"
#include "ConcreteStateB.h"
#include "Context.h"

#include <iostream>

State* ConcreteStateB::m_pState = nullptr;
State* ConcreteStateB::getInstance(){
    if(nullptr == m_pState)
    {
        m_pState = new ConcreteStateB();
    }
    return m_pState;
}

void ConcreteStateB::handle(Context *c){
    std::cout << "doing something in State B. \n done, change state to A"<<std::endl;
    c->changeState(ConcreteStateA::getInstance());
}
