#include<iostream>
#include "a.h"
using namespace std;

int fun1(int x, int y)
{
	return x + y;
}

int fun2(int x, int y)
{
	return x - y;
}

int fun3(int x, int y)
{
	return x * y;
}

int main()
{
	a xx(fun1);
	xx.calc(5, 6);
	cout << xx.show() << endl;
	xx.change(fun2);
	xx.calc(5, 6);
	cout << xx.show() << endl;

	return 0;
}