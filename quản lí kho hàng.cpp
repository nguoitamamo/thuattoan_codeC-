#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
struct MH{
	string ma,ten, hang, donvi;
	int gia_nhap, gia_ban;
};
string tach(string s) {
	string res = "";
	stringstream ss(s);
	string word;
	while (ss >> word) {
		res += toupper(word[0]);
	}
	return res;
}
bool cmp(MH a, MH b) {
	if (a.gia_ban - a.gia_nhap != b.gia_ban - b.gia_nhap)
		return a.gia_ban - a.gia_nhap < b.gia_ban - b.gia_nhap;
	else
		return a.ma < b.ma;
}
int main()
{
	int n; cin >> n;
	map<string, int> mp;
	vector<MH> v;
	for (int i = 0; i < n; i++) {
		cin.ignore();
		string ten, hang, donvi;
		getline(cin, ten);
		getline(cin, hang);
		getline(cin, donvi);
		int gia_nhap, gia_ban;
		cin >> gia_nhap >> gia_ban;
		string ma = tach(ten);
		mp[ma]++;
		string tmp = to_string(mp[ma]);
		int j = 0;
		while (j < 3) {
			tmp = "0" + tmp;
			j++;
		}
		ma = ma + tmp;
		MH x{ ma, ten,hang, donvi,gia_nhap, gia_ban };
		v.push_back(x);
	}
	sort(v.begin(), v.end(), cmp);
	for (auto &x : v) {
		cout << x.ma << " " << x.ten << " " << x.hang << " " << x.donvi << " " << x.gia_nhap << " " << x.gia_ban;
		cout << "\n";
	}
	return 0;
}