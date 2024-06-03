#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool search(int a[], int n, int x) {
	for (int i = 0; i < n; i++) {
		if (a[i] == x) {
			return true;
		}
	}
	return false;
}
bool search_np(int a[], int l, int r, int x,int n) {
	int l = 0, r = n - 1;
	while (l <= r) {
		int m = (l + r) / 2;
		if (a[m] == x) {
			return true;
		}
		else if (a[m] < x) {
			l = m + 1;
		}
		else {
			r = m - 1;
		}
	}
	return false;
}
// tìm vị trí xuất hiện đầu tiên của phần tử trong mảng
int first_num(int a[], int n, int x) {
	int save = 0;
	int l = 0, r = n - 1;
	while (l <= r) {
		 int  m = (l + r) / 2;
		 if (a[m] == x) {
			 save = m;
			 return save;
		 }
		 else if (a[m] > x) {
			 r = m - 1;
		 }
		 else {
			 l = m + 1;
		 }
	}
	return save;
}
int main()
{
	int n; cin >> n;
	int* a = new int[n];
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	int x; cin >> x;
	cout << first_num(a, n, x);
	return 0;
}