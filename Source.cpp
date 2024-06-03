#include<iostream>
using namespace std;
long long  ucll(long long a , long long b)
{
	if (b == 0)
		return a;
	else
	{
		return ucll(b, a % b);
	}
}
int main()
{
	long a, b;
	cin >> a >> b;
	if(ucll(a, b))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}