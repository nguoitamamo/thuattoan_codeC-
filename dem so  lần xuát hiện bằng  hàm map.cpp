#include<string>
#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<int, int > mp;
	int n; cin >> n;
	int* a = new int[n];  
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		mp[a[i]]++;
	}
	for (int i = 0; i < n; i++) {
		if (mp[a[i]] != 0) {
			cout << a[i] << " " << mp[a[i]] << "\n";
			mp[a[i]] = 0;
		}
	}
	return 0;
}