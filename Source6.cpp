#include<iostream>
using namespace std;
int n;
int a[100][100];
int res[100][100];
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		res[i][1] = a[i][1];
		res[0][i] = res[n + 1][i] = -10000;
	}
	for (int j = 2; j <= n; j++) {
		for (int i = 1; i <= n; i++) {
			res[i][j] = max(res[i - 1][j - 1], res[i][j - 1], res[i + 1][j - 1]) + a[i][j];
		}
	}
	int ans = -100000;
	for (int i = 1; i <= n; i++) {
		ans = max(ans, a[i][n]);
	}
	cout << ans;
	return 0;
}