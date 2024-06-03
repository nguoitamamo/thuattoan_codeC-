#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int nho_last(vector<int> v,int l, int r, int k) {
	int ans = -1;
	while (l <= r) {
		int m = (l + r) / 2;
		if (v[m] < k) {
			ans = m;
			l = m + 1;
		}
		else r = m - 1;
	}
	return ans;
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
	sort(v.begin(), v.end());
	/*for (int i = 0; i < n; i++) {
		int m=nho_last(v, 0, n - 1, v2[i]);
		if (m == -1) cout << "# ";
		else cout << v[m] << " ";
	}*/
	// dùng lower_bound
	for (int i = 0; i < n; i++) {
		auto it = lower_bound(v.begin(), v.end(), v2[i]);
		if (it == v.begin()) cout << "# ";
		else {
			it--;
			cout << *it << " ";
		}
	}
	return 0;

}
