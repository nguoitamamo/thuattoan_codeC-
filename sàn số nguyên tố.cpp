#include<iostream>
using namespace std;
bool NT(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}
int a[10000001] = { };
void NT2()
{
	for (int i = 0; i <= 10000001; i++)
	{
		a[i] = 1;
	}
	a[0] = a[1] = 0;
	for (int i = 2; i <= sqrt(10000001); i++)
	{
		if (a[i] == 1)
		{
			for (int j = i * i; j <= 10000001; j += i)
			{
				a[j] = 0;
			}
		}
	}

}
int main()
{
	NT2();
	int n; cin >> n;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 1)
		{
			cout << i << " ";
		}
	}
	return 0;
}