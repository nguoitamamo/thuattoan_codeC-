#include<iostream>
#include<map>
using namespace std;
int n, m;
int a[1000][1000]{};
long long  x[1000][1000]{};
long long  y[1000][1000]{};
 void check1(){
	 for (int i = 1; i <= n; i++) {
		 for (int j = 1; j <= m; j++) {
			 x[i][j] = x[i][j - 1] + a[i][j];
			 y[i][j] = y[i - 1][j] + a[i][j];
		 }
	 }
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			if (i == 0 || j==0) a[i][j] = 0;
			else cin >> a[i][j];
		}
	}
	check1();
	int q; cin >> q;
	while (q > 0) {
		int n1; cin >> n1;
		if (n1 == 1) {
			int x1, y1, z; cin >> x1 >> y1 >> z;
			if (x1 >= 1 && x1 <= n && y1 >= 1 && y1 <= n && z >= 1 && z <= n) {
				cout << x[x1][z] - x[x1][y1 - 1] << "\n";
			}
		}
		else {int u, v, t; cin >> u >> v >> t;
			if ( u>=1 && u <= m && v >= 1 && v <= m && t >= 1 && t <= m) {
				cout << y[t][u] - y[v - 1][u] << "\n";
			}
		}
		q--;
	}

	return 0;
}