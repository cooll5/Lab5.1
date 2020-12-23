﻿// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;
double k(const double x, const double y); // прототип
int main()
{
	double p, q;
	cout << "p = "; cin >> p;
	cout << "q = "; cin >> q;

	double c = ((k^2*(1+p, q^2)- k*(q*p, 1))/(1+k*(p^2,q)));
	cout << "c = " << c << endl;
	return 0;
}
double k(const double x, const double y) // визначення
{
	return sin(x) / (y * y) + cos(y) / x ^ 2;
}
