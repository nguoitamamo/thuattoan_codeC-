#include<iostream>
#include<algorithm>
#include<vector>
struct dragon {
	int xi, yi;
};
using namespace std;
bool cmp(dragon a, dragon b) {
	return (a.xi < b.yi);
}
int main()
{ 
	long long s;
	int  n;
	cin >> s >> n;
	vector<dragon> v;
	for (int i = 0; i < n; i++) {
		int xi; cin >> xi;
		int yi; cin >> yi;
		dragon x{ xi, yi};
		v.push_back(x);
	}
	sort(v.begin(), v.end(), cmp);
	for (auto &x: v){
		if (s <= x.xi) {
			cout << "NO";
			return 0;
		}
		s += x.yi;
    }
	cout << "YES";
	return 0;
}