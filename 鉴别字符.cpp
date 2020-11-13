#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	char a;
	cin >> a;
	if (a <= 32)
		cout << "A control character";
	else if (a <= '9' && a >= '0')
		cout << "A numeric character";
	else if (a <= 'Z' && a >= 'A')
		cout << "A capital letter";
	else if (a <= 'z' && a >= 'a')
		cout << "A small letter";
	else cout << "An other character";
}