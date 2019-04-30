#include<stdio.h>
#include<iostream>
#include<gsl/gsl_sf_bessel.h>
#include<math.h>
#include<vector>
using namespace std;

int main()
{
	double x = 5.0;
	double y = gsl_sf_bessel_J0(x);
	printf("J0(%g)=%.18e\n", x, y);
	vector<double> a;
	for (int i = 0; i < 20; i++) {
		a.push_back(sqrt(i));
	}
	for (int i = 0; i < 20; i++) {
		cout << a[i] << ' ';
		if (i > 0 && i % 5 == 0) {
			cout << endl;
		}
	}
	a.clear();
	return 0;
}