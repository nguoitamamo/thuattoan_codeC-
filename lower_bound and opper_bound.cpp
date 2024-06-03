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
/*bool search_np(int a[], int l, int r, int x, int n) {
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
}*/
// t 


     
int first_num(int a[], int n, int x) {
	int save = 0;
    int l = 0, r = n - 1;
	while (l <= r) {
		int  m = (l + r) / 2;
		if (a[m] == x) {
			save = m;
			r = m - 1;
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
int last_num(int a[], int n, int x) {
	int save = 0;
	int l = 0, r = n - 1;
	while (l <= r) {
		int  m = (l + r) / 2;
		if (a[m] == x) {
			save = m;
			l = m + 1;
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
int than_first(int a[], int n, int x) {
	int save = 0;
	int l = 0, r = n - 1;
	while (l <= r) {
		int  m = (l + r) / 2;
		if (a[m] == x) {
			save = m;
			l = m + 1;
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
	sort(a, a + n);// thêm greater<datatype_array>() // 
	int x; cin >> x;
	/*cout << first_num(a, n, x) << " " << last_num(a, n, x) << "\n"; // số lần xuất hiện đầu tiên và cuối cùng
	if (first_num(a, n, x)	!= 0 || last_num(a, n, x)!=0) {
		cout << "so lan xuat hien cua " << x << ": " << last_num(a, n, x) - first_num(a, n, x) + 1;
	}
	else {
		cout << first_num(a, n, x);
	}
	*/
	auto it= lower_bound(a, a + n, x); 
	if (it == a + n) {
		cout << "khong co phan tu trong mang >=" << x << "\n";
	}
	else {
		cout << *it << " " << it - a << "\n";
		cout << distance(a, it);// bằng với cout << it -a << "\n";
	}
	return 0;
}
// lower_bound trả về vị trí or giá trị phần tử đầu tiên lớn hơn >= key đầu tiên
// lower_bound<itrater1,itrater2,key>;
// nếu mà trong mảng tất cả giá trị đều nhỏ hơn a thì trả về iterator2(phânf tử cuối cùng trong mảng)
// opper_bound trả về vị trí or giá trị phần tử đầu tiên > key