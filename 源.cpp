#include<iostream>

using namespace std;

double arctan(double x);
double power(double x, int n);

int main()
{
	double pi = 0.0;
	double a = 1 / 5.0;
	double b = 1 / 239.0;

	pi = 16.0 * arctan(a) - 4.0 * arctan(b);

	cout << pi;

	return 0;
}

double arctan(double x)
{		
	int n = 1;
	double val = 0.0;
	double flag = 1e-15;
	double a = x;

	while (a > flag)
	{
		if ((n % 2) == 1)
			val += a;
		else
			val -= a;
		n++;
		a = power(x, 2 * n - 1) / (2 * n - 1);
	}

	return val;
}

double power(double x, int n)
{
	double val = 1.0;

	while (n--)
		val *= x;

	return val;
}