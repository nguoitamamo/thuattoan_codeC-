#include<iostream>
using namespace std;
int n, a[100][100];
int ans[100][100];
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		ans[i][1] = a[i][1];
		a[0][i] = a[n + 1][i] = INT_MIN;
	}
	for (int i = 2; i <= n ; i++) {
		for (int j = 1; j <= n + 1; j++) {
			ans[i][j] = max(ans[i - 1][j - 1], ans[i][j - 1], ans[i + 1][j - 1]) + a[i][j];
		}
	}
	int res = INT_MIN;
	for (int i = 1; i <= n; i++) {
		res = max(res, a[i][n]);
	}
	cout << res;
	return 0;
}