/*
 * IMyMath.h
 *
 *  Created on: 2018年4月24日
 *      Author: cxh
 */

#ifndef IMYMATH_H_
#define IMYMATH_H_

class IMyMath
{
public:
	IMyMath();
	virtual ~IMyMath();
	virtual int add(int a,int b)=0;
};

#endif /* IMYMATH_H_ */
