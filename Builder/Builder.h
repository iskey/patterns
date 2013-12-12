#ifndef __BUILDER_H__
#define __BUILDER_H__

class Builder
{
public:
	virtual void BuildHead()= 0;
	virtual void BuildBody()= 0;
	virtual void BuildLeftArm()= 0;
	virtual void BuildRightArm()= 0;
	virtual void BuildLeftLeg()= 0;
	virtual void BuildRightLeg()= 0;
};

class ThinBuilder: public Builder
{
public:
	void BuildHead();
	void BuildBody();
	void BuildLeftArm();
	void BuildRightArm();
	void BuildLeftLeg();
	void BuildRightLeg();
};

class FatBuilder: public Builder
{
public:
	void BuildHead();
	void BuildBody();
	void BuildLeftArm();
	void BuildRightArm();
	void BuildLeftLeg();
	void BuildRightLeg();
};

class Director
{
private:
	Builder *m_pbuilder;

public:
	Director(Builder *builder);
	void Create();
};

#endif //__BUILDER_H__