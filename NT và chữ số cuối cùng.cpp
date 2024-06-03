#include<iostream>
using namespace std;
int a[10000001];
void sang() {
	for (int i = 0; i <= sqrt(10000000); i++) {
		a[i] = 1;
	}
	a[0] = 0; a[1] = 0;
	for (int i = 2; i <=sqrt( 1000000); i++) {
		if (a[i] == 1) {
			for (int j = i * i; j <= 1000000; j += i) {
				a[j] = 0;
			}
		}
	}
}
bool last(int n) {
	int numlast = n % 10;
	while (n > 0) {
		if (n % 10 > numlast) {
			return false;
		}
		n /= 10;
	}
	return true;
}
int main()
{
	int n; cin >> n;
	sang();
	int dem = 0;
	for (int i = 0; i <= n; i++) {
		if (last(i) && a[i] == 1) {
			cout << i << " ";
			dem++;
		}
	}
	cout << "\n" << dem;
	return 0;
}