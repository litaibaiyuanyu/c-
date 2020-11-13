#include<iostream>
using namespace std;
int main()
{
	int a{ 0 }, he{ 0 }, n;
	cin >> n;
	if (n >= 0)
	{
		while (a <n)
		{
			a++;
			if (a % 2 == 0) { he = he + a; }
		}
	}
	else 
		while (n<a)
		{
			a--;
			if (a % 2 == 0) { he = he + a; }
		}
	cout << he;
}