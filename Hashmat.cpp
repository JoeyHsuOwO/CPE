//CPE-Hashmat the Brave Warrior
#include<iostream>
#include<cstdlib>//include to use abs()
using namespace std;

int main()
{
	long long int a, b;//input maybe 2^32
	while (cin >> a >> b)
	{
		cout << abs(a - b) << endl;
	}
	return 0;
}