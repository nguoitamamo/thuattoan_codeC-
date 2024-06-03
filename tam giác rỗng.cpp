#include<iostream>
using namespace std;
void in1(int n) {
	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j <= 2 * n; j++) {
			if (j == n - i || j == n + i) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << "\n";
	}
}
void in2(int n) {
	for (int j = 1; j <= n; j++) {
			cout << " *";
		}
	}
int main()
{
	int n;
	cin >> n;
	in1(n);
	in2(n);


	return 0;
}