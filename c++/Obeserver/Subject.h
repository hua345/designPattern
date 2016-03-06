#include "Obeserver.h"
#include <list>

class Subject
{
public:
	Subject();
	virtual ~Subject();
	Obeserver *m_Obeserver;

	void attach(Obeserver * pObeserver);
	void detach(Obeserver * pObeserver);
	void notify();

	virtual int getState() = 0;
	virtual void setState(int i)= 0;

private:
	std::list<Obeserver*> m_listObeserver;
};
