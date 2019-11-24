/*
 * MyMAth.h
 *
 *  Created on: 2018年4月24日
 *      Author: cxh
 */

#ifndef __EXPORT_CLASS_H
   #define __EXPORT_CLASS_H

#include "IMyMath.h"
    class MyMath:public IMyMath {
      public:
    	MyMath();
    	virtual ~MyMath();
    	virtual int add(int a,int b);//add
    };
   extern "C"   void createObject(IMyMath **obj);
#endif
