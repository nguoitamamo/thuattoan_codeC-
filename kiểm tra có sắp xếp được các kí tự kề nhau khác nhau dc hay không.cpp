#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void check(string s)
{
	int a[26] = { 0 };
	for (char x : s)
	{
		a[x - 'a']++;
	}
	int max_value = *max_element(a, a + 26);
	int b = s.length() - max_value;
	int c = max_value - b;
	if (abs(c) == 1 || abs(c)==0)
	{
		cout << "1";
	}
	else
	{
		cout << "0";
	}
}
int main()
{
	string s;
	getline(cin, s);
	check(s);

	return 0;
}