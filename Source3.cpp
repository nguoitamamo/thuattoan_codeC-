#include<iostream>
#include<map>
#include<set>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i = 0;
	do {
		int a;
		cin >> a;
		set<int> s;
		int* b = new int[a];
		for (int i = 0; i < a; i++) {
			cin >> b[i];
			s.insert(b[i]);
		}
		int dem = 1;
		for (int i = 1; i <= a - 1; i++) {
			dem++;
		}
		cout << "so luong phan tu khac nhau : " << dem << "\n";
		i++;
	} while (i < n);
	return 0;
}