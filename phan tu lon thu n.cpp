#include<iostream>
using namespace std;
void nhap(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void giam_dan(int a[], int n) {	
	int muon = 0;
	for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[j] > a[i]) {
				muon = a[i];
				a[i] = a[j];
				a[j] = muon;
			}
	  }
	
	}
}
void xuat(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << "\n";
	}
}
void in(int a[], int n,int x) {
	cout << "Gia tri lon thu hai trong mang: " << a[x-1];
}
int main()
{
	int a[20];
	int n;
	cout << "Nhap N: ";
	cin >> n;
	nhap(a, n);
	giam_dan(a, n);
	xuat(a, n);
	int x;
	cin >> x;
	in(a, n,x);
	return 0;
}