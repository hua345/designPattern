#ifndef STATE_H
#define STATE_H

class Context;
class State
{
public:
    State(){};
    virtual ~State(){};
    virtual void handle(Context* c){};
};

#endif
