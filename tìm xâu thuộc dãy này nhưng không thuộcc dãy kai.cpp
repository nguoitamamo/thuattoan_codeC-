#include<iostream>
#include<string>
#include<set>
#include<sstream>
using namespace std;
set<string> luu(string s)
{   
	set<string> se;
	stringstream a(s);
	string word;
	while ( a >> word)
	{
		se.insert(word);
	}
	return se;
}
int main()
{
	string a, b;
	getline(cin, a);
	getline(cin, b);
	set<string> se1 = luu(a);
	set<string> se2 = luu(b);
	for (string x : se1)
	{
		if (se2.find(x) == se2.end())
		{
			cout << x << " ";
		}
	}
	return 0;
}