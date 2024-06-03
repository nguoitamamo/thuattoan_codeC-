#include<iostream>
#include<set>
#include<map>
using namespace std;
int main()
{
	int n;  cin >> n;
	int i = 0;
	do { 
		int m; cin >> m;
		//int* a = new int[n];
		map<int, int > mp;
		for (int i = 0; i < m; i++) {
			//cin >> a[i];
			int x; cin >> x;
			mp[x] = 1;
		}
		int k; cin >> k;
		int j = 0;
		while (j<k) {
			int x; cin >> x;
			if (mp.find(x) != mp.end()) {
				cout << "YES\n";
			}
			else {
				cout << "NO\n";
			}
			j++;
		}

		i++;
	} while (i < n);
	return 0;
}