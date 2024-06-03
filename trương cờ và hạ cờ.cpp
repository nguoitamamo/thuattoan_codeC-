#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string chuyen(int n) {
	string tmp = "";
	while (n > 0) {
		tmp += to_string(n % 2);
		n /= 2;
	}
	return tmp;
}
typedef long long ll;
int main()
{
	int n; cin >> n;
	string s = chuyen(n);
	while (s.length() != 32) {
		s += "0";
	}
	reverse(s.begin(), s.end()); 
	int k; cin >> k; 
	ll a = stoll(s);
	int mu = 0; ll ans = 0;
	while (a > 0) {
		ans += (a % 10) * pow(2, mu);
		mu++;
		a /= 10;
	}
	cout << "Truong co: " << ans + pow(2, k);
	cout << "\nHa co: " << ans - pow(2, k);
	return 0;
}