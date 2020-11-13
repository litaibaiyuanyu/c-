#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double a; 
	cin >> a ;
	cout << setw(10) << a << endl;
	cout<<fixed<< setprecision(4) << a;
}