#include<iostream>
#include<map>
using namespace std;
int main()
{
	int n; cin >> n;
	map<int, int> mp;
	int a[1000] = {};
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		mp[a[i]]++;
	}
	int k; cin >> k;
	long long  dem = 0;
	for (int i = 0; i < n; i++) {
		dem += mp[k - a[i]];
		if (a[i] * 2 == k) {
			dem--;
		}
	}
	cout << dem / 2;
	return 0;
}