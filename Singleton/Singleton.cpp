#ifndef __SINGLETON_CPP__
#define __SINGLETON_CPP__

#include "Singleton.h"
#include <iostream>
using namespace std;

Singleton *Singleton::_instance= 0;

Singleton::Singleton()
{
	cout<<"Singleton"<<endl;
}

Singleton *Singleton::Instance()
{
	if(_instance== 0)
	{
		_instance= new Singleton();
	}

	return _instance;
}

#endif //__SINGLETON_CPP__

