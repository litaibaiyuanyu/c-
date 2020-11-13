#include<iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	if (a > 0)
		cout << "Positive Integer";
	if (a < 0)
		cout << "Negative Integer";
	if (a == 0)
		cout << "Zero";
}