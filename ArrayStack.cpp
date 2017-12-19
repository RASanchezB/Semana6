#include "ArrayStack.h"
#include "Object.h"

ArrayStack::ArrayStack(int pSize){
	size = pSize;
	array = new Object*[size];
	availPos = 0;
	for (int i = 0; i < size; i++) {
		array[i] = NULL;
	}
}

bool ArrayStack::push(Object dato){
	bool retval = false;

	if(availPos == size){
		return retval;
	}else{
		array[availPos++]=dato;
		retval = true;
		return retval;
	}
}

bool ArrayStack::isEmpty(){
	return availPos == 0;
}

Object ArrayStack::pop(){
	if(isEmpty()){
		return 0;
	}else{
		Object retval = array[availPos-1];
		array[availPos-1] =0;
		availPos--;
		return retval;
	}
}

ArrayStack::~ArrayStack(){
	delete[] array;
}
