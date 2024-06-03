#include<iostream>
#include<queue>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;
/*
* thêm vào ở cuối và xóa ở đầu ( cấu  trúc dữ diệu hàng đợi)
* push
* pop
* front( lấy ra phần tử đầu tiên của hàng)
* size
* empty
*/
// HÙYNH NGỌC TRƯƠNG MẦY NGU QUÁ
// DỐT THẾ THÌ LÀM ĐƯỢC GÌ
/* SINH RA SỐ NHỊ PHÂN TỪ 1 ĐẾN N
queue<string> q; 
vector<string> v;
void sinh() {
	for (int i = 1; i < 10000; i++) {
		string a = q.front();
		q.pop();
		v.push_back(a + '0');
		q.push(a + '0');
		v.push_back(a + '1');
		q.push(a + '1');
	}
}*/
typedef long long ll;
queue<string> q;
vector<string> v;
void sinh(int n) {
	while (1) {
		for (int i = 1; i <= n; i++) {
			string a = q.front();
			q.pop();
			v.push_back(a + '0');
			q.push(a + '0');
			v.push_back(a + '9');
			q.push(a + '9');
		}
	
	}
}
int main()
{
	/*q.push("1");
	sinh();
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		cout << "1 ";
		for (int i = 0; i < x - 1; i++) {
			cout << v[i] << " ";
		}
		cout << "\n";
	}
	*/
	int n; cin >> n;
	q.push("9");
	
	return 0;
}