#include "ConcreteStateA.h"
#include "ConcreteStateB.h"
#include "Context.h"
#include <stdlib.h>
#include <iostream>

int main(int arg, char** argv)
{
    Context* c = new Context();
    c->request();
    c->request();
    c->request();
    c->request();
    c->request();
    c->request();
    delete c;
    return 0;
}
