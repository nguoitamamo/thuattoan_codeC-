#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n; cin >> n;
	int a[100] = {};
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int l = 0;
	for (int i = 0; i < n-1; i++)
	{
		if (a[i] > a[i + 1])
		{
			l = i;
			break;
		}
	}
	int r = 0;
	for (int j = n - 1; j  > 0; j--)
	{
		if (a[j] < a[j - 1])
		{
			r = j;
			break;
		}
	}
	int x = *max_element(a + l, a + r + 1);
	int y = *min_element(a + l, a + r+1);
	for (int i = 0; i <= l; i++)
	{
		if (a[i] > y)
		{
			l = i;
		}
	}
	for (int i = n - 1; i >= r; i--)
	{
		if (a[i] < x)
		{
			r = i;
		}
	}
	cout << l+1 << " " << r+1;
	return 0;
}
/*
b1: tìm ví trí vô lí
b2: mở rộng
*/