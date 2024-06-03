#include<iostream>
#include<map>
#include<queue>
#include<string>
using namespace std;
void solve(map<char, int> mp,string s,int k) {
	for (auto x : s) {
		mp[x]++;
	}
	priority_queue<int> q;
	for (auto& it : mp) {
		q.push(it.second);
	}
	int tong = 0;
	for (int i = 1; i <= k; i++) {
		int a = q.top();
		q.pop();
		a--; q.push(max(a, 0));
	}
	while (!q.empty()) {
		tong += q.top() * q.top();
		q.pop();
	}
	cout << tong;
}
int main()
{
	
	int n; cin >> n; cin.ignore();
	for (int i = 0; i < n; i++) {
		map<char, int> mp;
		string s; cin >> s;
		int k; cin >> k;
		cin.ignore();
		solve(mp,s, k);
	}
	
	
	return 0;
}