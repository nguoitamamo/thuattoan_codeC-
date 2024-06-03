#include<iostream>
using namespace std;
int main()
{
	char n; cin >> n;
	int dem = 0;
	bool check = true;
	do {
		if (dem == 26) {
			cin >> n;
			dem = 0;
		}
		for (int i = 65; i <= 90; i++) {
			if (n != char(i)) dem++;
			if (dem == 26) cout << "YEU CAU NHAP LAI\n";
		}
	} while (dem == 26);
	do {
		int k; cin >> k;
		if (k >= 0 && k <= 25) { cout << char(int(n) + k); check = false; }
		else cout << "YEU CAU NHAP LAI 0=<k <=25\n";
	} while (check);

	return 0;
}