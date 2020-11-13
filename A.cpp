
#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	int a,b,c,f,g,n,m,t;
	b = rand() % 100;
	a = rand() % 100;
	c = a + b;
	cout << a << " " << b << "二者之和为？" << endl;
	cin >> f;
	if (c == f)
	{
		cout << "正确";
	}
	else
	{
		cout << "错误，正确答案为" << c;
	}
	n = rand() % 100;
	m = rand() % 100;
	if (m > n)
	{
		g = m - n;
		cout <<endl<< m << "减" << n << "为";
		cin >> t;
		if (g == t)
		{
			cout<<endl << "正确";
		}
		else
		{
			cout <<endl<< "错误，正确答案为" << g;
		}
	}
	else
	{
		g = n - m;
		cout << endl << n << "减" << m << "为";
		cin >> t;
		if (t == g)
		{
			cout << endl << "正确";
		}
		else
		{
			cout << endl << "错误，正确答案为" << g;
		}
	}
	
}