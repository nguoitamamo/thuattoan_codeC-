#include<iostream>
#include<set>
#include<sstream>
using namespace std;
int main()
{
	string s, t;
	getline(cin, s); 
	for (int i = 0; i < s.length(); i++) {
		s[i] = tolower(s[i]);
	}
	getline(cin, t); 
	for (int i = 0; i < t.length(); i++) {
		t[i] = tolower(t[i]);
	}
	set<string> se1, se2;
	stringstream ss(s);
	string word;
	while (ss >> word) {
		se1.insert(word);
	}
	stringstream ss1(t);
	while (ss1 >> word) {
		se2.insert(word);
	}
	for (auto& x : se1) {
		if (se2.count(x) == 0) cout << x << " ";
	}

	return 0;
}