#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int p;
	double c, f;
	cin >> p;
	if (p == 1) 
	{
		cin >> f;
		c = 5*(f - 32) / 9;
		cout << fixed << setprecision(2)<< c;
	}
	else if(p==2)
	{
		cin >> c;
		f = c * 9 / 5 + 32;
		cout << fixed << setprecision(2) << f;
	}
	else
		cout << "ERROR";
}