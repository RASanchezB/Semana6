#include "Rectangulo.h"
#include "Object.h"
#include <typeinfo>

Rectangulo :: Rectangulo(double pBase,double pAltura){
	base=pBase;
	altura=pAltura;

}

double Rectangulo::getArea(){
	return base*altura;
}
double Rectangulo::getPerimetro(){
	return base*2+altura*2;
}bool Rectangulo::equals(Object* pOther){
	if (typeid(*pOther)== typeid (Rectangulo)) {
		Rectangulo* other= dynamic_cast<Rectangulo*>(pOther);
		return this ->getArea()== other-> getArea();
	}else{

	}
	return false;
}
string Rectangulo::toString(){
	return "toDO";
}
