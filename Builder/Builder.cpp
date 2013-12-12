#include "Builder.h"

#include <iostream>
using namespace std;

void ThinBuilder::BuildHead()
{
	cout<<"Build thin head"<<endl;
}

void ThinBuilder::BuildBody()
{
	cout<<"Build thin body"<<endl;
}

void ThinBuilder::BuildLeftArm()
{
	cout<<"Build thin left arm"<<endl;
}

void ThinBuilder::BuildRightArm()
{
	cout<<"Build thin right arm"<<endl;
}

void ThinBuilder::BuildLeftLeg()
{
	cout<<"Build thin left leg"<<endl;
}

void ThinBuilder::BuildRightLeg()
{
	cout<<"Build thin right leg"<<endl;
}

void FatBuilder::BuildHead()
{
	cout<<"Build fat head"<<endl;
}

void FatBuilder::BuildBody()
{
	cout<<"Build fat body"<<endl;
}

void FatBuilder::BuildLeftArm()
{
	cout<<"Build fat left arm"<<endl;
}

void FatBuilder::BuildRightArm()
{
	cout<<"Build fat right arm"<<endl;
}

void FatBuilder::BuildLeftLeg()
{
	cout<<"Build fat left leg"<<endl;
}

void FatBuilder::BuildRightLeg()
{
	cout<<"Build fat right leg"<<endl;
}

Director::Director(Builder *builder)
{
	m_pbuilder= builder;
}

void Director::Create()
{
	m_pbuilder->BuildHead();
	m_pbuilder->BuildBody();
	m_pbuilder->BuildLeftArm();
	m_pbuilder->BuildRightArm();
	m_pbuilder->BuildLeftLeg();
	m_pbuilder->BuildRightArm();
}
