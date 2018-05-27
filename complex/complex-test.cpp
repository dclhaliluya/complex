#include <iostream>
#include "complex.h"
#include <Windows.h>
using namespace std;
int main()
{
	complex c1(2.5, 1.5);
	complex c2;
	complex* p = new complex(4);
	cout << "实部:" << c1.real() << "\t虚部:" << c1.imag() << endl;
	cout << "实部:" << c2.real() << "\t虚部:" << c2.imag() << endl;
	cout << "实部:" << p->real() << "\t虚部:" << p->imag() << endl;
	cout << "hejkd" << endl;
	system("pause");
	return 0;
}