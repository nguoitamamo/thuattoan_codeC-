#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main()
{  // ứng dụng của set: tìm phần tử max min, dem so lượng phần tử khác nhau , xóa phânf tử trong mảng

	int n; cin >> n;
	int k; cin >> k;
	int* a = new int[n];
	multiset<int> ms;
	for (int i = 0; i < n;i++) {
		cin >> a[i];
	
	}
	// thêm ba phâng tử đầu tiên cho multiset
	for (int i = 0; i < k; i++)
	{
		ms.insert(a[i]);
	}
	
	for (int i = k; i < n; i++) { // nghĩa là lặp lại bao nhiêu lần
		cout << *ms.rbegin() << " "; // in ra phần tưr lớn nhất
		ms.erase(ms.find(a[i-k])); // xóa phần tử đầu tiên
		ms.insert(a[i]); // thêm phần tử tiếp theo trong mảng
	}
	cout << *ms.rbegin();
	return 0;
}