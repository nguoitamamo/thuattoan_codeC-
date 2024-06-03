#include<iostream>
#include<string>
using namespace std;
void min_value(string a, string b)
{
	for (char &x : a)
	{
		if (x == '6')
		{
			x = '5';
		}
	}
	for (char &x : b)
	{
		if (x == '6')
		{
			x = '5';
		}
	}
	cout << stoll(a) + stoll(b) << " ";
}
void max_value(string a, string b)
{
	for (char &x : a)
	{
		if (x == '5')
		{
			x = '6';
		}
	}
	for (char &x : b)
	{
		if (x == '5')
		{
			x = '6';
		}
	}
	cout << stoll(a) + stoll(b) << "\n";
}
int main()
{
	int n; cin >> n;
	int i= 0;
	do
	{	
		string a, b;
		cin >> a;
		cin >> b;
		min_value(a, b);
		max_value(a, b);
		i++;
	} while (i < n);


	return 0;
}