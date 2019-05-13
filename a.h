#pragma once
class a
{
public:
	a();
	a(int (*p)(int, int));
	virtual ~a();
	void change(int (*p)(int, int));
	void calc(int, int);
	int show();
private:
	int (*p)(int, int);
	int res;
};

