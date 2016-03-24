#include "Context.h"
#include "ConcreteStateA.h"

Context::Context(){
    m_pState = ConcreteStateA::getInstance();
}

void Context::changeState(State *state){
    if(nullptr != state){
        m_pState = state;
    }

}

void Context::request(){
    if(nullptr != m_pState){
        m_pState->handle(this);
    }
}
