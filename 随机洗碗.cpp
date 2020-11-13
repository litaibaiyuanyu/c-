#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int m;
	cin >> m;
	srand(m);
	if (rand() % 13 + 1 == 1)
		cout << "YES";
	else
		if (rand() % 13 + 1 == 1)
			cout << "YES";
		else
			if (rand() % 13 + 1 == 1)
				cout << "YES";
			else
				cout << "NO";
	
}