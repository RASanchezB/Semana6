#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "figura.h"

class Rectangulo : public figura{
private:
	double base,altura;
public:
	Rectangulo(double,double);
	virtual double getArea();
	virtual double getPerimetro();
	//heredados de object
	virtual bool equals(Object*);
	virtual string toString();

};
#endif
