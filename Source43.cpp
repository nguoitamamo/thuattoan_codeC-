#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
void  all(string &s) {
	for (int i = 0; i < s.length(); i++) {
		s[i] = toupper(s[i]);
	}
}
void first(string &s) {
	s[0] = toupper(s[0]);
	for (int i = 1; i < s.length(); i++) {
		s[i] = tolower(s[i]);
	}
	cout << s;
}
int main()
{
	int n; cin >> n; cin.ignore();
	for (int i = 1; i <= n; i++) {
		string s; getline(cin, s);
		vector<string > v;
		stringstream ss(s);
		string word;
		while (ss >> word) {
			v.push_back(word);
		}
		all(v[v.size() - 1]); cout << v[v.size() - 1] << ",";
		for (int j = 0; j <= v.size() - 2; j++) {
			first(v[j]);
			if (j != v.size() - 2) {
				cout << " ";
			}
		}
		cout << "\n";
	}
	system("pause");
	return 0;
}