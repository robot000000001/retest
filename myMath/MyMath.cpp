/*
 * MyMAth.cpp
 *
 *  Created on: 2018年4月24日
 *      Author: cxh
 */

#include "MyMath.h"


extern "C"   void createObject(IMyMath **obj)
{
	*obj=new MyMath();
}
IMyMath::IMyMath()
{

}
IMyMath::~IMyMath()
{

}
MyMath::MyMath()
{

}
MyMath::~MyMath()
{

}
int MyMath::add(int a,int b)
{
   int c=a+b;
    return c;
}
