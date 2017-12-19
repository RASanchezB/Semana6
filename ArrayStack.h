#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include "Stach.h"
#include "Object.h"

class ArrayStack: public Stack{
	private:
		Object* array;
		int size;
		int availPos;
	public:
		ArrayStack(int);
		virtual bool push(char);
		virtual char pop();
		virtual bool isEmpty();
		~ArrayStack();

};
#endif
