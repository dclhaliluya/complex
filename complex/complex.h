#pragma once
#ifndef __COMPLEX__
#define __COMPLEX__

#include <cmath>


//前置声明
class ostream;


//类---声明
class complex //class head
{
	//class body
public:
	complex(double r = 0, double i = 0 /*默认实参*/)
		:re(r), im(i)//初始序列 等同于 re = r , im = i;
	{ }//构造函数
	complex& operator += (const complex&);
	double real() const { return re; }
	double imag() const { return im; }

private:
	double re, im;

	friend complex& __doapl(complex*, const complex&);
};


//类---定义

#endif
