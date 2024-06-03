#include<iostream>
#include<set>
using namespace std;
void check(long long n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			int dem = 0;
			while (n % i == 0) {
				dem++;
				n /= i;
			}
			if (dem >= 3) {
				cout << "YES";
				return;
			}
		}
		
	}
	cout << "NO";
}

int main()
{
	long long n;
	cin >> n;
	check(n);

	return 0;
}