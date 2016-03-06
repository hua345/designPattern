#include "ConcreteObeserver.h"
#include "ConcreteSubject.h"
#include <iostream>

ConcreteObeserver::ConcreteObeserver(std::string name)
:m_obbjName(name)
,m_obeserverState(0){}

void ConcreteObeserver::update(Subject *sub){
    m_obeserverState = sub->getState();
    std::cout <<m_obbjName<< " State : " << m_obeserverState << std::endl;
}
