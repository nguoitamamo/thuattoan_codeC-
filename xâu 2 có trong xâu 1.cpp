#include<iostream>
#include<string>
using namespace std;
int main()
{  
	string s; getline(cin, s);
	string t; getline(cin, t);
	int ans = 0;
	for (int i = 0; i < s.length(); i++) {
		string res = s.substr(i, t.length());
		if (res == t) ans++;
	}
	cout << ans;
	return 0;
}