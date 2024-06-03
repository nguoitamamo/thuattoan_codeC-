#include<iostream>
using namespace std;
void check(string s) {
	int ans = 0, sum = 0;
	for (int i = 0; i < s.length(); i++) {
		if (isdigit(s[i])) {
			sum = sum * 10 + s[i] - '0';
	    }
		else {
			ans = max(ans, sum);
			sum = 0;
		}
	}
	ans = max(ans, sum);
	cout << ans;
}
int main()
{
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		string s; cin >> s;
		check(s);
	}

	return 0;
}