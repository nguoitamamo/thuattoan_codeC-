#include<iostream>
using namespace std;
int a[10000000];
void sinh() {
	for (int i = 0; i <1000000; i++) {
		a[i] = 1;
	}
	a[0] = a[1] = 0;
	for (int i = 2; i <= sqrt(1000000); i++) {
		if (a[i] == 1) {
			for (int j = i * i; j <= 1000000;j+=i) {
				a[j] = 0;
			}
		}
	}
}
long long b[10000000];
int main()
{
	sinh();
	int n; cin >> n;
	int dem = 0;
	b[0] = 0;
	b[1] = 0;
	for (int i = 2; i <1000000; i++) {
		if (a[i] == 1)dem++;
		b[i] = dem;
	}
	for (int i = 1; i <= n; i++) {
		int x, y; cin >> x >> y;
		if (x >= 0 && x <= y && y <= 1000000) {
			if (x == 0) cout << b[y];
			else cout << b[y] - b[x - 1];
		}
		cout << "\n";
	}

	return 0;
}