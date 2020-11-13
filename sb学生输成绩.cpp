#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a{ 0 }, n{ 0 };
	double b{ 0 },he{ 0 };
	bool x{ true };
	while (x)
	{
		cin >> a;
		n++;
		if (n == 1) 
		{
			if (a < 0) 
			{
				cout << "No Students"; return 0;
			}
			
		}
		if (a >= 0) 
		{
			he = a + he;
			b = he / n;
		}
		else 
		{
			cout << fixed << setprecision(2) << b;
			return 0;
		}
	}
}