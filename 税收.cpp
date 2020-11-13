#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double a, a1{ 0 }, a2{ 0 }, a3{0};
	cin >> a;
	if (a >= 10000)
	{
		a1 = (a - 10000) * 0.05;
		a2 = 5000 * 0.03;
		a3 = 4000 * 0.02;
	}
	else if (a >= 5000)
	{
		a1 = (a - 5000) * 0.03;
		a2 = 4000 * 0.02;
	}
	else if (a >= 1000)
		a1 = (a - 1000) * 0.02;
	cout <<"Tax="<< fixed << setprecision(2) << a1 + a2 + a3;

}