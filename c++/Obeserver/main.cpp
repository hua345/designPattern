#include "ConcreteSubject.h"
#include "ConcreteObeserver.h"
#include <iostream>

int main(int argc, char *argv[])
{
    ConcreteSubject subject;
    ConcreteObeserver* obeserver1 = new ConcreteObeserver("hello");
    ConcreteObeserver* obeserver2 = new ConcreteObeserver("xiaye");
    ConcreteObeserver* obeserver3 = new ConcreteObeserver("liufang");
    subject.attach(obeserver1);
    subject.attach(obeserver2);
    subject.attach(obeserver3);

    subject.setState(2);
    subject.notify();
    return 0;
}
