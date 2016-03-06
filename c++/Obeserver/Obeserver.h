#ifndef OBESERVER_H
#define OBESERVER_H
class Subject;

class Obeserver
{

public:
	Obeserver();
	virtual ~Obeserver();
	virtual void update(Subject * sub) = 0;
};

#endif //OBESERVER_H
