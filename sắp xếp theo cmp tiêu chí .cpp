#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(string a, string b) {
	if (a.length() != b.length()) {
		return a.length() > b.length();
	}
	return a < b;
}

int main()
{
	int n; cin >> n;
	string* a = new string[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	stable_sort(a, a + n, cmp);
	for (int i = 0; i < n;i++ ) {
		cout << a[i] << " ";
	}

	return 0;
}