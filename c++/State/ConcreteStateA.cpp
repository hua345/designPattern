#include "ConcreteStateA.h"
#include "ConcreteStateB.h"
#include "Context.h"
#include <iostream>

State* ConcreteStateA::m_pState = nullptr;
State* ConcreteStateA::getInstance(){
    if(nullptr == m_pState)
    {
        m_pState = new ConcreteStateA();
    }
    return m_pState;
}

void ConcreteStateA::handle(Context *c){
    std::cout << "doing something in State A. \n done, change state to B"<<std::endl;
    c->changeState(ConcreteStateB::getInstance());
}
