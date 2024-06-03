#include<iostream>
#include<algorithm>
using namespace std;
void arrange1(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
}
void arrange(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int min = i;
		for (int j = i + 1; j < n; i++) {
			if (a[j] < a[min])
				min = j;
		}
		swap(a[i], a[min]);
	}
}
void arrange2(int a[], int n) { // dùng thuật toán này khi số lượng phần tử >=0 và <=10^7
	for (int i = 1; i < n; i++) {
		int x = a[i], pos = i - 1;
		while (x < a[pos] && pos >= 0) {
			a[pos + 1] = a[pos];
			pos--;
		}
		a[pos +1] = x;
	}
}
int cnt[1000001];
int main()
{
	int n; cin >> n;
	int* a = new int[n];
	int m = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		cnt[a[i]]++;
		m = max(m, a[i]);
	}
	cout << "\n";
	for (int i = 0; i <= m; i++) {
		if (cnt[i] != 0) {
			for (int j = 0; j < cnt[i]; j++) {
				cout << i << " ";
			}
		}
	}
	
	return 0;
}



