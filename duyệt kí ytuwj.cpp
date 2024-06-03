#include<iostream>
using namespace std;;
int main()
{
	char n; cin >> n;
	for (int i = 65; i <= 90; i++) {
		if (n == char(i)) { cout << "VIET HOA\n"; return 0; }
	}
	for (int i = 97; i <= 122; i++) {
		if (n == char(i)) { cout << "VIET THUONG\n"; return 0; }
	}
	for (int i = 48; i <= 57; i++) {
		if (n == char(i)) { cout << "LA SO\n"; return 0; }
	}
	cout << "LA KI TU DAC BIET\n";
	return 0;
}