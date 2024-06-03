#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int than_first(int a[], int l , int r ,int x)
{
	int index = 0;
	while (l <= r) {
		int m = (l + r) / 2;
		if (a[m] == x) {
			index = m;
			r = m - 1;

		}
		else if (a[m] > x) {
			r = m - 1;
		}
		else {
			l = m + 1;
		}
	}
	return index;
}
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
bool check(int n) {
	for (int i = 2; i < sqrt(n) + 1; i++) {
		if (n % i == 0) {
			int dem = 0;
			while (n % i == 0) {
				dem++;
				n /= i;
			}
			if (dem >= 3) return true;
		}
	}
	return false;
}
int main()
{

	//int n; cin >> n;
	//int a[1000] = {};
	//for (int i = 0; i < n; i++) {
	//	cin >> a[i];
	//}
	//sort(a, a + n);// thêm greater<datatype_array>() // 
	//int x; cin >> x;
	////cout << first_num(a, n, x) << " " << last_num(a, n, x) << "\n"; // số lần xuất hiện đầu tiên và cuối cùng
	////if (first_num(a, n, x)	!= 0 || last_num(a, n, x)!=0) {
	////	cout << "so lan xuat hien cua " << x << ": " << last_num(a, n, x) - first_num(a, n, x) + 1;
	//
	//cout << b//}
	////else {
	////	cout << first_num(a, n, x);
	////}

	// 
	//int b =dau_tien(a, n, x );;
	//	

	/*int* a = new int[5];
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	int n; cin >> n;
	sort(a, a + 5);
	//int a = cuoi_cung(a, 5, n);
	int b = dau_tien(a, 5, n);
	cout << b << " " << a[b];
	*
	*/

	int n; cin >> n;
	int a[1000] = {};
	int b[1000] = {};
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(a, a + n);
	/*for (int i = 0; i < n; i++) {
		auto it = lower_bound(a, a + n, a[i]);
		if( it ==a)  cout << "# ";
		else {
			it--;
			cout << *it << " ";
		}
	}*/


	for (int i = 0; i < n; i++) {
		auto it = lower_bound(a, a + n, b[i]);
		if (it == a)  cout << "# ";
		else {
			it--;
			cout << *it << " ";
		}
	}

    return 0;
}