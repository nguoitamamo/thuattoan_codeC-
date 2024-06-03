#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<sstream>
#include<set>
using namespace std;
int main()
{
	int n; cin >> n;
	cin.ignore();
	map<string, pair<string,bool>> mp;
	for (int i = 0; i < n; i++) {
		string x; getline(cin, x);
		vector<string> v;
		stringstream s(x);
		string word;
		while (s >> word) {
			v.push_back(word);
		}
		string msv = v[0];
		string ho_ten = "";
		for (int i = 1; i < v.size(); i++) {
			ho_ten += v[i] + " ";
		}
		v.pop_back();
		mp[msv].first=ho_ten;
		mp[msv].second = true;
	}
	int m ; cin >> m;
	set<string> duthi;
	for (int i = 0; i < m; i++) {
		string x, y, z, t;
		cin >> x >> y >> z >> t;
		if (t != "ou.edu.vn") {
			mp[z].second = false;
		}
		if (t == "ou.edu.vn") {
			duthi.insert(z);
		}
	}
	for (auto& x : mp) {
		cout << x.first << " " << x.second.first;
		if (x.second.second = false || duthi.count(x.first) == 0) {
			cout << "FAIL";
		}
		else cout << "OK";
		cout << "\n";
	}
	return 0;
}