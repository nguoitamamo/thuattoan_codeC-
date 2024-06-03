#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int dx[8] = { -1,-1,-1,0,0,1,1,1 };
int dy[8] = { -1,0,1,-1,1,-1,0,1 };
int n, m ,dem = 0;
int a[50][50];
void de_quy(int i, int j, int x) {
	dem++;
	a[i][j] = 10000;
	for (int k = 0; k < 8; k++) {
		int im = i + dx[k];
		int jm = j + dy[k];
		if (im >= 0 && im < n && jm >= 0 && jm < m && a[im][jm] == x) {
			de_quy(im, jm,x);
		}
	}
}
// dem để tính giá trị của vùng
// vector dùng để lưu giá trị của từng vùng x(lưu từng thằng đếm)
// tmp giá trị của phần tử để tính số vùng trên nó
int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	map<int, vector<int> > mp;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] != 10000) {
				int tmp = a[i][j];
				dem = 0;
				de_quy(i, j, a[i][j]);
				mp[tmp].push_back(dem);
			}
		}
	}
	for (auto &x : mp) {
		sort(x.second.begin(), x.second.end());
		cout << (x).first << ": ";
		for (int it: x.second) {
			cout << it << " ";
		}
		cout << "\n";
	}
	return 0;
}