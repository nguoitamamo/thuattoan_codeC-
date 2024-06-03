#include<iostream>
#include<vector>
using namespace std;
int merge(int a[], int l, int r, int m) {
	vector<int > x(a + l, a + m+1);
	vector<int> y(a + m + 1, a + r +1);
	int i = 0, j = 0;
	int cnt = 0;
	while (i < x.size() && j < y.size()) {
		if (x[i] <= y[j]) {
			a[l] = x[i]; l++; i++;
		}
		else {
			cnt += x.size() - i;
			a[l] = y[j]; l++; j++;
		}
	}
	while (i < x.size()) {
		a[l] = x[i]; l++; i++;
	}
	while (j < y.size()) {
		a[l] = y[j]; l++; j++;
	}
	return cnt;
}
int mergesort(int a[], int l, int r) {
	int dem = 0;
	if (l < r) {
		int m = (l + r) / 2;
		dem += mergesort(a, l, m);
		dem += mergesort(a, m + 1, r);
		dem += merge(a, l, r,m);
	}
	return dem;
}
int main()
{
	int a[6] = { 3,4,1,7,6,5 };
	int ans = mergesort(a, 0, 5);
	cout << ans;


	return 0;
}