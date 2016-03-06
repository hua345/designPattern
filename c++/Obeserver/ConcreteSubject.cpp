#include "ConcreteSubject.h"

ConcreteSubject::ConcreteSubject():m_state(0){}
ConcreteSubject::~ConcreteSubject(){}

int ConcreteSubject::getState(){
    return m_state;
}

void ConcreteSubject::setState(int i){
    m_state = i;
}
