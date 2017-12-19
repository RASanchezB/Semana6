#include "Node.h"


void Node::setData(Object* data){
	DATA=data;
}
Node::Node(Object* data){
	DATA=data;
	NEXT=0;
}

Object* Node::getData(){
	return DATA;
}
Node* Node::getNext(){
	return NEXT;
}

void Node::setNext(Node* next){
	NEXT=next;
}

Node::~Node(){
	if (DATA!=0) {
		delete DATA;
	}
	if (NEXT!=0) {
		delete NEXT;
	}
}
