#ifndef NODO_H
#define NODO_H

#include "Object.h"

class Node{
private:
	Object* DATA;
	Node* NEXT;
public:
	Node(Object*);
	Object* getData();
	void setData(Object*);
	Node* getNext();
	void setNext(Node*);
	~Node();
};

#endif
