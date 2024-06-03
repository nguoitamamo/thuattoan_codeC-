#include<iostream>
#include<string>
using namespace std;
void tam_giac(int n,string a) {
	for (int i = n; i > 0; i--) {
		for (int j = i - 1; j > 0; j--) {
			cout << " ";
		}
		for (int k =i; k <= n; k++) {
			cout << a << " ";
		}
		cout << "\n";
	}
}
int main()
{
	int n;
	string a;
	cin >> a;
	cin >> n;
	tam_giac(n,a);
	return 0;
}
