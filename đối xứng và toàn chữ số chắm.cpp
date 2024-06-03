#include<iostream>
#include<string>
using namespace std;
bool check(string a)
{
	string b = a;
	reverse(b.begin(), b.end());
	if (b != a) 
	{
		   return false;
	}
	for (char x : a)
	{
		if ((x - '0') % 2 != 0)
		{
			return false;	
		}
    }
	return true;
}
int main()
{
	string s;
	getline(cin, s);
	if (check(s) == true)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}