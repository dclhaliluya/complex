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
	complex(double r = 0, double i = 0 /*Ĭ��ʵ�Σ���ֵpass by value*/)
		:re(r), im(i)//��ʼ���� ��ͬ�� re = r , im = i;
	{ }//���캯��
	complex& operator += (const complex& /*������ pass by reference ��to const��*/);
	//����ֵ�Ĵ���Ҳ�����������ã�pass by reference��
	double real() const { return re; }
	double imag() const { return im; }
	//һ��������ĺ������Է�Ϊ���Ըı����ݺͲ���ı��������ֺ���
	//����ı��������ݵĺ�������const��important��
	//�ڵ��ó�����const��ʱ������û�б�������û�б���const�����

	int func(const complex& param)
	{
		return param.re + param.im;
	}//��ͬclass�ĸ���objects��Ϊ��Ԫ
private:
	double re, im;

	friend/*friend ��ʾ��Ԫ*/ complex& __doapl(complex*, const complex&);


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



//��---����

#endif
