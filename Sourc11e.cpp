#include<iostream>
#include<algorithm>
using namespace std;

void dem1(string s, int k) {
	int ans = 0;
	for (int i = 0; i < s.length(); i++) {
		int dem = 0;
		int a[256]{};
		memset(a, 0, sizeof(a));
		for (int j = i; j < s.length(); j++) {
			if (a[s[j]] == 0) {
				dem++;
				a[s[j]] = 1;
			}
			if (dem == k) ans++;
			if (dem > k) break;
		}
	}
	cout << ans;
}
int main()
{

	string s; int k;
	cin >> s >> k;
	dem1(s, k);

 
	return 0;
}