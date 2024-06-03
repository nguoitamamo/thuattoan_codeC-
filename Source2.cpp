#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main()
{
	int n; cin >> n;
	//int k; cin >> k;
	//int* a = new int[n];
//	vector<int> a;// là một cái mảng động tức lầ số lượng phần tưr sẽ bị thay đổi
	multiset<int> s;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		s.insert(x);
	}
	int b;
	cout << "Nhap so can xoa: ";
	cin >> b;
	if (s.find(b) != s.end() ) {
		s.erase(b);
	}
	else {
		cout << "So ban muon xoa khong co trong mang: ";
	}
	for (int x : s) {
		cout << x << " ";
	}
	return 0;
}
