#include<iostream>
#include<set>
#include<string>
using namespace std;
set<int > se;
void tinh(string a)
{
	int sum = 0;
	for (int i = 0; i < a.length(); i++)
	{
		if (isdigit(a[i]))
		{
			sum = sum * 10 + a[i] - '0';
			if (i == a.length() - 1)
			{
				se.insert(sum);
			}
		}
		else
		{
			se.insert(sum);
			sum = 0;
		}
	}
}
int main()
{
	
	int n; cin >> n;
	int i = 0; 
	do { 
		string s;
		cin >> s;
		tinh(s);
		cout << *se.rbegin();
		se.clear();
		i++;
	} while (i<n);


	return 0;
}