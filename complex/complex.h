#pragma once
#ifndef __COMPLEX__
#define __COMPLEX__

#include <cmath>


//ǰ������
class ostream;


//��---����
class complex //class head
{
	//class body
public:
	complex(double r = 0, double i = 0 /*Ĭ��ʵ��*/)
		:re(r), im(i)//��ʼ���� ��ͬ�� re = r , im = i;
	{ }//���캯��
	complex& operator += (const complex&);
	double real() const { return re; }
	double imag() const { return im; }

private:
	double re, im;

	friend complex& __doapl(complex*, const complex&);
};


//��---����

#endif
