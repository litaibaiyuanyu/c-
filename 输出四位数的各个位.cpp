#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int a,qian,bai,shi,ge;
	cin >> a;
	if (a > 9999)
		cout << "ERROR";
	else 
		if(a<1000)cout << "ERROR";
		else 
			if(a<0)cout << "ERROR";
			else 
			{
				qian = a / 1000;
				bai = (a - qian * 1000) / 100;
				shi = (a - qian * 1000 - bai * 100) / 10;
				ge = a - qian * 1000 - bai * 100 - shi * 10;
				cout << qian << " " << bai << " " << shi << " " << ge;
			}
}