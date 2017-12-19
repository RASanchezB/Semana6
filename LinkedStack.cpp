#include "LinkedStack.h"

LinkedStack::LinkedStack(){
	START=0;

}
LinkedStack::~LinkedStack(){
	delete START;
}

bool LinkedStack::push(Object* data){
	Node* temp=new Node(data);
	temp->setNext(START);
	START= temp;
	return true;
}

bool LinkedStack::isEmpty(){
	return START==0;
}

Object* LinkedStack::pop(){
	if (!isEmpty()) {
		Node* temp= START;
		START=START->getNext();
		temp->setNext(0);
		Object* retValue= temp->getData();
		temp->setData(0);
		delete temp;
		return retValue;
	}

}
