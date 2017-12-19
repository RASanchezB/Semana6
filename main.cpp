#include "figura.h"
#include "Rectangulo.h"
#include <iostream>
#include <vector>
#include "Object.h"
#include "Cuadrado.h"
#include "Stack.h"
#include "LinkedStack.h"
#include "Node.h"
#include "Char.h"

//TypeInfo
#include <typeinfo>



using namespace std;

int main() {

	/*Stack* stack= new LinkedStack();
	delete stack;*/
	/*
	Object* obj=new Rectangulo(5,5);

	cout<<"El objeto es obj:"<< typeid(obj).name()<<endl;
	//agarrando el apuntador
	cout<<"El objeto es un *obj: "<< typeid(*obj).name()<<endl;

	cout<<"El objeto es un: "<<typeid(Rectangulo).name()<<endl;

	if (typeid(*obj) == typeid (Rectangulo)) {
		//casteo dinamico nos retorna un apuntador
		Rectangulo* rectangulo= dynamic_cast<Rectangulo*>(obj);
		cout<<"EL objeto es un rectangulo. Su area es: "<<rectangulo->getArea()<<endl;
	}

	Rectangulo* rectangulo2=new Rectangulo(25,1);
	if (obj->equals(rectangulo2)){

		cout<<"Los rectangulos son iguales"<<endl;
	}
	delete obj;
	delete rectangulo2;
	/*cout << "el area es" << figura->getArea()<<endl;
	std::cout << "el perimetro es:" << figura->getPerimetro()<<endl;*/
	string cadena="Hola Mundo";
	Stack* stack=new LinkedStack();

	for (size_t i = 0; i < cadena.size(); i++) {
		Char* caracter=new Char();
		caracter->setChar(cadena[i]);
		stack->push(caracter);
	}
	while(!stack->isEmpty()){
		Char* caracter =dynamic_cast<Char*>(stack->pop());

		cout<<caracter->getChar();

		delete caracter;
	}
	cout<<endl;
	delete stack;
	return 0;

}
