#include<iostream>
#include<sstream>
#include<string>
#include<map>
#include<vector>
using namespace std;
int main()
{
	int n; cin >> n;
	cin.ignore();
	map<string, int> mp;
	vector<string > v;
	for (int i = 0; i < n; i++) {
		string s; getline(cin, s);
		for (int i = 0; i < s.length(); i++) {
			s[i] = tolower(s[i]);
		}
		stringstream ss(s);
		string word;
		while (ss >> word) {
			v.push_back(word);
		}
		string ns = v[v.size() - 1];
		string ma = v[v.size() - 2];
		for (int i = 0; i < v.size() - 2; i++) {
			ma += v[i][0];
		}
		mp[ma]++;
		if (mp[ma] == 1) cout << ma << "@xyz.edu.vn" << "\n";
		else cout << ma << mp[ma] << "@xyz.edu.vn" << "\n"; 
		stringstream ss2(ns);
		while (getline(ss2, word, '/')) {
			cout << stoi(word);
		}
		cout << "\n";
		v.clear();
 	}


	return 0;
}