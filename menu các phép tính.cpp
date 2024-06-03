#include<iostream>
#include<iomanip>
using namespace std;
int n, m;
void menu() {
	cout << "1: Cong\n";
	cout << "1: Tru\n";
	cout << "1: Nhan\n";
	cout << "1: Chia\n";
}
int main()
{
	menu();
	bool check = true; bool check1 = true;
	do {
		if (check1) { cout << "Nhap 2 so nguyen: "; cin >> m >> n; }
		int k; cout << "Chon( 1 - 4): ";  cin >> k;
		if (k >= 1 && k <= 4) {
			check1 = true;
			switch (k) {
			case 1: cout << m << " + " << n << " = " << m + n << "\n"; break;
			case 2: cout << m << " - " << n << " = " << m - n << "\n"; break;
			case 3: cout << m << " * " << n << " = " << m * n << "\n"; break;
			case 4: double x = m, y = n;
				if (y == 0) cout << "FAIL\n";
				else cout << m << " / " << n << fixed << setprecision(1) << " = " << x / y << "\n";
				break;
			}
		}
		else { cout << "Chon lai\n"; check1 = false; }
		if (check1) {
			char a;
			cout << "Tiep tuc( C/K): "; cin >> a;
			if (a != 'C')  check = false; 
		}
	} while (check);
	return 0;
}