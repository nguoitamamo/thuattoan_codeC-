#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// hàm trả về vị trí phần tử lớn hơn đầu tiên
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
// hàm trả về vij trí cuối cùng nhỏ hơn k
int cuoi_cung(int a[], int l, int r, int k)
{
	int save = 0;
	while (l <= r)
	{
		int m = (l + r) / 2;
		if (a[m] < k)
		{
			save = m;
			l = m + 1;
		}
		else
		{
			r = m - 1;
		}
	}
	return save;
}
int main()
{
	int n; cin >> n;
	int a[1000] = {};
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	//sort(s.begin(), s.end());
	int k; cin >> k;
	int cnt = 0;
	for (int i = 0; i < n - 1; i++)
	{
		int x = cuoi_cung(a, i + 1, n - 1, k - a[i]);
		if (x != 0)
		{
			cnt += ((x - (i + 1)) + 1);
		}
	}
	cout << cnt;
	;
	return 0;
}