#ifndef CONCRETEOBESERVER_H
#define CONCRETEOBESERVER_H

#include "Obeserver.h"
#include <string>

class ConcreteObeserver : public Obeserver
{
public:
    ConcreteObeserver(std::string name);

    ~ConcreteObeserver() = default;
    virtual void update(Subject* sub);
private:
    std::string m_obbjName;
    int m_obeserverState;
};

#endif //CONCRETEOBESERVER_H  //CONCRETEOBESERVER_H
