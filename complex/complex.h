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
	complex(double r = 0, double i = 0 /*默认实参，传值pass by value*/)
		:re(r), im(i)//初始序列 等同于 re = r , im = i;
	{ }//构造函数
	complex& operator += (const complex& /*传引用 pass by reference （to const）*/);
	//返回值的传递也尽量传递引用（pass by reference）
	double real() const { return re; }
	double imag() const { return im; }
	//一个类里面的函数可以分为可以改变数据和不会改变数据两种函数
	//不会改变数据内容的函数加上const（important）
	//在调用常量（const）时。类中没有标明方法没有标明const会出错

	int func(const complex& param)
	{
		return param.re + param.im;
	}//相同class的各个objects互为友元
private:
	double re, im;

	friend/*friend 表示友元*/ complex& __doapl(complex*, const complex&);


};

inline complex&
__doapl(complex *ths, const complex& r)
{
	ths->re += r.re;
	ths->im += r.im;
	return *ths;
}
inline complex&
complex::operator +=(const complex& r)
{
	return __doapl(this, r);
}



//类---定义

#endif
