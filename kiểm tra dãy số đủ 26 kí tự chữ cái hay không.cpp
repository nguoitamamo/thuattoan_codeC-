#include<iostream>
#include<string>;
using namespace std;
int main()
{
	string a; cin >> a;
	int b[26] = { 0 };
	for (int i = 0; i < a.length(); i++)
	{
		b[a[i] - 'a'] = 1;
	}
	for (int i = 0; i < 26; i++) {
		if (b[i] != 1)
		{
			cout << "NO";
			return 0;
		}
		
	}
	cout << "YES";
	return 0;
}