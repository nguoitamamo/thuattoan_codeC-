#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
map<int, int> mp;
bool cmp(int a, int b)
{
	if (mp[a] != mp[b])
	{
		return mp[a] > mp[b];
	}
	return a < b;
}
int main()
{
	int n; cin >> n;
	vector<int> s(n);
	for (int &x : s)
	{
		cin >> x;
		mp[x]++;
	}
	sort(s.begin(), s.end(), cmp);
	for (int x : s)
	{
		cout << x << " ";
	}

	// dùng comparator điều chỉnh hàm sắp xếp của mầy
	// huỳnh ngọc trương mầy ngu quá

	return 0;
}