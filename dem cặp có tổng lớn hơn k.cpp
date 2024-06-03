#include<iostream>
#include<algorithm>
using namespace std;
int dau_tien(int a[], int l, int r, int k)
{
	int save = 0;
	while (l <= r)
	{
		int m = (l + r) / 2;
		if (a[m] > k)
		{
			save = m;
			r = m - 1;
		}
		else
		{
			l = m + 1;
		}
	}
	return save;
}
int main()
{
	int n,k; cin >> n >> k;
	int a[100]{};
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	int dem = 0;
	for (int i = 0; i < n; i++) {
		auto it = upper_bound(a + i, a + n, k - a[i]);
		if (it != 0) {
			dem += (n - distance(a, it )-1);
		}
	}
	cout << dem;


	return 0;
}