#include <iostream>
#include "complex.h"
#include <Windows.h>
using namespace std;
int main()
{
	complex c1(2.5, 1.5);
	complex c2;
	complex* p = new complex(4);
	cout << "ʵ��:" << c1.real() << "\t�鲿:" << c1.imag() << endl;
	cout << "ʵ��:" << c2.real() << "\t�鲿:" << c2.imag() << endl;
	cout << "ʵ��:" << p->real() << "\t�鲿:" << p->imag() << endl;
	cout << "hejkd" << endl;
	system("pause");
	return 0;
}