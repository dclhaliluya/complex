#include <iostream>
#include "complex.h"
#include <Windows.h>
using namespace std;
int main()
{
	complex c1(2.5, 1.5);
	complex c2;
	const complex* p = new complex(4);
	cout << "c1ʵ��:" << c1.real() << "\t�鲿:" << c1.imag() << endl;
	cout << "c2ʵ��:" << c2.real() << "\t�鲿:" << c2.imag() << endl;
	cout << "pʵ��:" << p->real() << "\t�鲿:" << p->imag() << endl;
	cout << "==============c2.func(c1)================"<<endl;
	c2.func(c1);
	cout << "c2 ������ӣ�"<<c2.func(c1) << endl;
	cout << "============ʵ��operator+=================" << endl;
	c1.operator+=(*p);
	cout << "c1ʵ��:" << c1.real() << "\t�鲿:" << c1.imag() << endl;
	system("pause");
	return 0;
}