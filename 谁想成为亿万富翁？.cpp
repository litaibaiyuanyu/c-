#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a{ 0 }, b{0};
	cin >>a;
	while (a<100000000)
	{
		a = a * 2;
		b++;
	}
	cout << b << " " << "Years";
}