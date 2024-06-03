#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
/*string chuyen(int n) {
	string tmp = "";
	while (n > 0) {
		tmp += to_string(n % 2);
		n /= 2;
	}
	return reverse(tmp.begin(), tmp.end());
}*/
int main()
{
	string s; cin >> s;
    reverse(s.begin(), s.end());
	cout << s;
	return 0;
}