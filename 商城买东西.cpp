#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double money;
	cin >> money;
	if (money < 0)
	{
		cout << "ERROR";
	}
	else{ if (money <= 200)
		cout << money;
	else
	{
		if (money < 1000)
		{
			cout << fixed << setprecision(2) << money * 0.9;
		}
		else
		{
			if (money < 3000)
			{
				cout << fixed << setprecision(2) << money * 0.8;
			}
			else
			{
				if (money < 5000)
				{
					cout << fixed << setprecision(2) << money * 0.65;
				}
				else
				{
					cout << fixed << setprecision(2) << money * 0.55;
				}
			}
		}
	}
	}
}

