#include<iostream>
#include<vector>
#include<string>
#include<math.h>
#include<sstream>
using namespace std;

int main()
{
	// sử dụng vector 
	/*
	khai báo: vector<datatype> ten_vector;
	hàm vector là một mảng động mà số lượng phần tử thay đổi khi thêm vào một 1 số lần tăng 1
	thêm phần tử : ten_vector.push_back(giá tri);
	kích thước của mảng: ten_vector.size();
	truy cập đến từng giá trị của các phần tử trong mảng cũng tương tự ta truy cập bằng chỉ số
	ngoài ra để truy cập đến giá trị cuối cùng ten_vector.back();
	duyệt bằng 4 cách: for(); for each; iterator; for auto

	
	*/

	/*vector<int> a;
	a.push_back(10);
	a.push_back(20);
	// 4 cách duyệt qua từng phần tử
	CXfor (int i = 0; i < a.size(); i++) {
		cout << a[i] << "\n";
	}
	for (int x : a) {
		cout << x << "\n";
	}
	for (vector<int>::iterator it = a.begin(); it != a.end(); it++) {
		cout << *it << "\n";
	}
	for (auto it = a.begin(); it != a.end(); it++) {
		cout << *it << "\n";
	}
	int n;
	cin >> n;
	vector<int> a(n); // nghĩa là một vector có số phần tử biết trước giống với mảng
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		a.push_back(x);
	}
	
	// vector<int> a(n,100); nghĩa là khai báo mảng vector có n phần tử và mỗi phần tử đề có giá trị là 100 
	*/


	string s;
	getline(cin, s);
	stringstream b(s);// tách từng chữ trong string
	string tmp;
	vector<string> v;
	int count = 0;
	while (b >> tmp) {
		v.push_back(tmp);
		count++;
	}
	for (string x : v) {
		cout << x << "\n";
	}
	cout << count;
	return 0;
}