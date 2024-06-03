#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void nho_first(vector<int> v,int l, int r,int k) {
	if (*min_element(v.begin(), v.end()) >= k) { cout << "# "; return; }
	else {
		int ans = 0;
		while (l <= r) {
			int m = (l + r) / 2;
			if (v[m] < k) {
				ans = v[m];
				l = m + 1;
			}
			else r = m - 1;
		}
		cout << ans << " ";
	}
}
int main()
{
	int n; cin >> n;
	vector<int> v(n);
	vector<int> v2(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		v2[i] = v[i];
	}
	sort(v2.begin(), v2.end());
	for (int i = 0; i < n; i++) {
		nho_first(v2, 0, n - 1, v[i]);
    }
	
	return 0;
}