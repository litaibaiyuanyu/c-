#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double x, y;
	cin >> x;
	if (x < 0)
		y = abs(x);
	if (x >= 0 && x <= 10)
		y = exp(x) * sin(x);
	if (x >= 10 && x <= 20)
		y = pow(x, 3);
	if (x >= 20)
		y = (3 + 2 * x) * log(x);
	cout << fixed << setprecision(2) << y;
}