#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n; cin >> n;
	map<int, int> mp;
	int l = INT_MAX;
	int r = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		int x; cin >> x;
		l = min(l, x);
		r = max(r, x);
		mp[x] = 1;
	}
	int cnt = 0;
	for (int i = l; i <= r; i++)
	{
		if (mp[i] ==0)
		{
			cnt++;
		}
	}
	cout << cnt;
	

	return 0;
}