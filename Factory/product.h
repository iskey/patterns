#ifndef __PRODUCT_H__
#define __PRODUCT_H__

class Product
{
public:
	virtual ~Product()= 0;

protected:
	Product();

private:
};

class Product1 : public Product
{
public:
	~Product1();
	Product1();

protected:

private:	
};

class Product2 : public Product
{
public:
	~Product2();
	Product2();

protected:

private:	
};
#endif //__PRODUCT_H__