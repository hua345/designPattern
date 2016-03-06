#include "Subject.h"
#include <cstddef>
Subject::Subject(){}
Subject::~Subject(){}

void Subject::attach(Obeserver *pObeserver){
    m_listObeserver.push_back(pObeserver);
}

void Subject::detach(Obeserver *pObeserver){
    for(auto it = m_listObeserver.begin(); it != m_listObeserver.end(); ++it){
        if(*it == pObeserver){
            m_listObeserver.erase(it);
            return ;
        }
    }
}

void Subject::notify(){
    for (auto it = m_listObeserver.begin(); it != m_listObeserver.end(); ++it)
    {
        (*it)->update(this);
    }
}
