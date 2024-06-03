#include<iostream>
#include<sstream>
#include<string>
#include<map>
#include<vector>
using namespace std;
struct SV {
	string ma;
	int so;
	string date;
};
int main()
{
	vector<SV> st;
	vector<string> v;
	map<string, int> mp;
	int n; cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		string s;
		getline(cin, s);
		for (int i = 0; i < s.length(); i++) {
			s[i] = tolower(s[i]);
		}
		stringstream ss(s);
		string word;
		while (ss >> word) {
			v.push_back(word);
		}
		string ten, date, ho_lot;
		for (auto it = 0; it <= v.size() - 1; it++) {
			if (it == v.size() - 1) date = v[it];
			else if (it == v.size() - 2) ten = v[it];
			else ho_lot += v[it][0];
		}
		string ma = ten + ho_lot;
		mp[ma]++;
		SV x{ ma, mp[ma],date};
		st.push_back(x);
		v.clear();
	}
	for (auto& x : st) {
		if (x.so == 1) {
			cout << x.ma << "@xyz.edu.vn " << "\n";
		}
		else cout << x.ma << x.so << "@xyz.edu.vn " << "\n";
		stringstream ss2(x.date);
		string word;
		while (getline(ss2, word, '/')) {
			cout << stoi(word);
		}
		cout << "\n";
	}
	return 0;
}