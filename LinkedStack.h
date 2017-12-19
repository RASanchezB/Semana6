#ifndef LINKEDSTACK_H
#define LINKEDSTACK_H

#include "Stack.h"

class LINKEDSTACK_H:public Stack{
private:
	Node* START;
public:
	LinkedStack();
	virtual bool push(Object*);
	virtual Object* pop();
	virtual bool isEmpty();
	~LinkedStack();
};

#endif
