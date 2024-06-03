#include<iostream>
using namespace std;
typedef long long ll;
const ll MOD = pow(10, 9) + 7;
void nhan(ll a[2][2], ll b[2][2]) {
	int res[2][2] = { { 0 ,0} , {0 ,0 } };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			res[i][j] = 0;
			for (int k = 0; k < 2; k++) {
				res[i][j] += a[i][k] * b[k][j] % MOD;
			}
		}
	}
	for(int i=0; i < 2; i++){
		for (int j = 0; j < 2; j++) {
			a[i][j] = res[i][j];
		}
	}
}
ll solve(ll n) {
	ll res[2][2] = { { 1, 0}, { 0 ,1} };
	ll a[2][2] = { { 1, 1}, { 1 ,0} };
	while (n) {
		if (n % 2 != 0) {
			nhan(res, a);
		}
		nhan(a, a);
		n /=  2;
	}
	return res[0][1];
}
int main()
{
	ll n; cin >> n;
	cout << solve(n);




	return 0;
}