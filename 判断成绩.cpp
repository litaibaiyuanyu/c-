#include<iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	if (a < 0)
		cout << "ERROR";
	else
		if (a <= 59)
			cout << "F";
		else
			if (a <= 69)
				cout << "D";
			else
				if (a <= 79)
					cout << "C";
				else
					if (a <= 89)
						cout << "B";
					else
						if (a <= 100)
							cout << "A";
						else
							cout << "ERROR";

}