#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{ 
	long long s; cin >> s;
	long long n; cin >> n;
	vector<pair<long long , int>> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].first >> v[i].second;
	}
	sort(v.begin(), v.end());
	for (auto it =v.begin(); it!=v.end(); it++) {
		if (s <= (*it).first) {
			cout << "NO";
			return 0;
		}
		s += (*it).second;
	}
	cout << "YES";
	return 0;
}