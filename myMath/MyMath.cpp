/*
 * MyMAth.cpp
 *
 *  Created on: 2018年4月24日
 *      Author: cxh
 */

#include "MyMath.h"


extern "C"   void createObject(IMyMath **obj,char *flageName)
{
     *obj=NULL;
      if(strcmp(flageName,"add")==0)
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
//加法 11
int MyMath::add(int a,int b)
{
  int cc=1;
   int e=0;
   int c=a+b;
    return c;
}
