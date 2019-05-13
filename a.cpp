#include "a.h"



a::a()
{
	p = nullptr;
}

a::a(int (*fun)(int, int))
{
	p = fun;
}


a::~a()
{

}

void a::change(int(*fun)(int, int))
{
	p = fun;
}

void a::calc(int x,int y)
{
	res = p(x, y);
}

int a::show()
{
	return res;
}
