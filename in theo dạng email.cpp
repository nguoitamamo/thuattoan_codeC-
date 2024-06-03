#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<map>
using namespace std;
int main()
{
	int i = 0; 
	int n; cin >> n; 
	cin.ignore();
	map<string, int> mp;
	do {
		string a; getline(cin, a);
		for (int i = 0; i < a.length(); i++)
		{
			a[i] = tolower(a[i]);
		}
		string word;
		stringstream s(a);
		vector<string> v;
		string res = "";
		while (s >> word) 
		{
			v.push_back(word);
		}
		res += v[v.size() - 1];
		for (int i = 0; i < v.size() - 1; i++) 
		{
			res += v[i][0];
		}
		mp[res]++;
		if (mp[res]==1)
		{
			cout << res << "@gmail.com\n";
		}
		else 
		{
			cout << res << mp[res] << "@gmail.com\n";
			
		}
		i++;
	} while (i < n);

	return 0;
}