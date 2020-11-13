#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	char zi; int w;
	cin >> zi >> w;
	if (zi >= 'a' && zi <= 'z')
		zi = ((zi - 'a') - w + 26) % 26 + 'a';
	if(zi>='A'&&zi<='Z')
		zi = ((zi - 'A') - w + 26) % 26 + 'A';
	if (zi >= '0' && zi <= '9')
		zi = (zi - '0' - w + 10) % 10+ '0';
	cout << zi;
}