#include "factory.h"

#include <iostream>

using namespace std;

Factory::Factory()
{

}

Factory::~Factory()
{

}

Factory1::Factory1()
{
	cout<<"Factory1"<<endl;
}

Factory1::~Factory1()
{

}

Product* Factory1::CreateProduct()
{
	return new Product1();
}

Factory2::Factory2()
{
	cout<<"Factory2"<<endl;
}

Factory2::~Factory2()
{

}

Product* Factory2::CreateProduct()
{
	return new Product2();
}