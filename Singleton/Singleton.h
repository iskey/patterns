#ifndef __SINGLETON__H__
#define __SINGLETON__H__

#include <iostream>
using namespace std;

class Singleton
{
public:
	static Singleton* Instance();

protected:
	Singleton();
	~Singleton();

private:
	static Singleton* _instance;
};

#endif //__SINGLETON__H__
