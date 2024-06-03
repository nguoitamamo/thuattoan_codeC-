#include<iostream>
#include<vector>
using namespace std;
int main()
{

		int n, k, b; 
		cin >> n >> k >> b;
		int a[101] = { 0 };
		for (int i = 0; i < b; i++) {
			int x; cin >> x;
			a[x] = 1; // danh dau den hong
		}
		int cnt = 0;
		for (int i = 0; i < k; i++) {
			if (a[i] == 1) cnt++;
		}
		int ans = cnt;
		for (int i = k + 1; i <= n; i++) {
			cnt = cnt - a[i - k] + a[i];
			cnt = min(ans, cnt);
		}
		cout << ans;

 
	return 0;
}