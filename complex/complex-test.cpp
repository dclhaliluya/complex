#include <iostream>
#include "complex.h"
#include <Windows.h>
using namespace std;
int main()
{
	complex c1(2.5, 1.5);
	complex c2;
	const complex* p = new complex(4);
	cout << "c1实部:" << c1.real() << "\t虚部:" << c1.imag() << endl;
	cout << "c2实部:" << c2.real() << "\t虚部:" << c2.imag() << endl;
	cout << "p实部:" << p->real() << "\t虚部:" << p->imag() << endl;
	cout << "==============c2.func(c1)================"<<endl;
	c2.func(c1);
	cout << "c2 两者相加："<<c2.func(c1) << endl;
	cout << "============实现operator+=================" << endl;
	c1.operator+=(*p);
	cout << "c1实部:" << c1.real() << "\t虚部:" << c1.imag() << endl;
	system("pause");
	return 0;
}