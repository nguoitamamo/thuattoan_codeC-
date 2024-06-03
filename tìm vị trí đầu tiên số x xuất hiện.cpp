#include<iostream>
#include<algorithm>
using namespace std;
int dau_tien(int a[], int n, int x) {// tìm xuất hiện đầu tiên
	int l = 0, r = n - 1, m;
	int save = 0;
	while (l <= r) {
		m = (l + r) / 2;
		if (a[m] == x) {
			save = m;
			r = m - 1;
		}
		else if (a[m] < x) {
			l = m + 1;
		}
		else {
			r = m - 1;
		}
	}
	return save;
}
int cuoi_cung(int a[], int n, int x) {// xuất hiện cuối cùng trong mảng
	int l = 0, r = n - 1, m;
	int save = 0;
	while (l <= r) {
		m = (l + r) / 2;
		if (a[m] == x) {
			save = m;
			l = m + 1;
		}
		else if (a[m] < x) {
			l = m + 1;
		}
		else {
			r = m - 1;
		}
	}
	return save;
}
// dem số lần xuất hiện cuẩ phần từr x trong mảng

int main()
{
	int* a = new int[5];
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	int n; cin >> n;
	int a = cuoi_cung(a, 5, n);
	int b = dau_tien(a, 5, n);
	cout << a << " " << b;
	return 0;
}