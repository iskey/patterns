#ifndef __FACTORY__H__
#define __FACTORY__H__

#include "product.h"

class Factory
{
public:
	virtual ~Factory()= 0;
	virtual Product* CreateProduct()= 0;

protected:
	Factory();

private:
};

class Factory1 : public Factory
{
public:
	~Factory1();
	Factory1();
	Product* CreateProduct();

protected:

private:
};

class Factory2 : public Factory
{
public:
	~Factory2();
	Factory2();
	Product* CreateProduct();

protected:

private:
};

#endif// __FACTORY__H__