#include<iostream>
#include<string>
using namespace std;
bool check(long long n) {
	if (n < 0) n *= -1;
	string s = to_string(n);
	for (int i = 0; i < s.length(); i++) {
		if ((i + 1) % 2 != (s[i] - '0') % 2) return false;
	}
	return true;
}
int main()
{
	long long n; cin >> n;
	if (check(n)) cout << "YES";
	else cout << "NO";
	

	return 0;
}