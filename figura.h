#ifndef FIGURA_H
#define FIGURA_H

#include "Object.h"

class figura:public Object {
public:
	virtual double getArea();
	virtual double getPerimetro()=0;
	virtual bool equals(Object*)=0;
	virtual string toString()=0;
};

#endif
