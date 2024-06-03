#include<iostream>
using namespace std;
int dx[8] = { -1,-1,-1,0,0,1,1,1 };
int dy[8] = { -1,0,1,-1,1,-1,0,1 };
int n, m;
int a[50][50];
void de_quy(int i, int j) {
	a[i][j] = 0;
	for (int k = 0; k < 8; k++) {
		int im = i + dx[k];
		int jm = j + dy[k];
		if (im >= 0 && im < n && jm >= 0 && jm < m && a[im][jm] == 1) {
			de_quy(im, jm);
		}
	}
}
int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m ; j++) {
			if (a[i][j] == 1) {
				cnt++;
				de_quy(i, j);
			}
		}
	}
	cout << cnt;

	return 0;
}