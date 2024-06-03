#include<iostream>
#include<set>
using namespace std;
bool NT(int n) {
	if (n <= 1) return false;
	else {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) return false;
		}
	}
	return true;
}
int main()
{
	int n; cin >> n;
	int a[201][201]{};
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	set<int> s;
	for (int i = 0; i < n; i++) {
		if (NT(a[i][i])) s.insert(a[i][i]);
		if (NT(a[i][n - 1 - i])) s.insert(a[i][n - 1 - i]);
	}
	cout << s.size();
	return 0;
}
