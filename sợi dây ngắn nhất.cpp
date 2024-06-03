#include<iostream>
#include<queue>
#include<vector>
using namespace std;
/*
priority_queue
top Lấy ra phần tử max hoặc min
pop xóa phần tử max hoặc min

*/
int main()
{
	priority_queue<int> pq; // phần tử đầu tiên là max
	priority_queue<int, vector<int>, greater<int> > pq1; // phần tử đầu tiên là min
	int n; cin >> n;
	int tong = 0;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		pq1.push(x);
	}
	while (pq1.size() > 1) {
		int a; a = pq1.top();
		pq1.pop();
		int b; b = pq1.top();
		pq1.pop();
		pq1.push(a+b);
		tong += a + b;
	}
	cout << tong;
	return 0;
}