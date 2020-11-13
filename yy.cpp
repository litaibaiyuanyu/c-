#include <iostream>
using namespace std;
void f();
int main()
{
	int a, b;
	cin >> a >> b;

	if (a>b)
	{
		cout << a << endl;
	}
	else
	{
		cout << b << endl;
	}
	switch (a)
	{
	case 0:a = a + 1; break;
	case 1:a = a + 2; break;
	default:a = a + 100;
	}
	cout << a;
}
void f()
{

}