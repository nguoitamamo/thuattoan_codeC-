#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n; cin >> n;
	while (n > 0) {
		int x, y; cin >> x >> y;
		vector<int> v(x);
		for (auto& x : v) cin >> x;
		long long sum = 0;
		for (int i = 0; i < y; i++) sum += v[i];
		long long res = sum;  int index = 0;
		for (int i = y; i < x; i++) {
			sum = sum + v[i] - v[i - y];
			if (sum > res) {
				res = sum;
				index = i - 2;
			}
		}
		cout << res << "\n";
		for (int i = 0; i < y; i++) {
			cout << v[static_cast<std::vector<int, std::allocator<int>>::size_type>(index) + i] << " ";
		}
		cout << "\n";
		v.clear();
	}



	return 0;
 }