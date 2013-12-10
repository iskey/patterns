#include "product.h"
#include "factory.h"

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	Factory* fac1= new Factory1();
	Factory* fac2= new Factory2();
	Product* p1= fac1->CreateProduct();
	Product* p2= fac2->CreateProduct();

	return 0;
}