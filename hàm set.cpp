#include<iostream>
#include<set>

using namespace std;
int main()
{
	/*


	*/

	set<string> b;
	b.insert(" huynh");
	b.insert("ngoc");
	b.insert("truong");
	// tìm kiếm 
	if (b.count("ngoc") != 0) {
		cout << "found\n";
	}
	else {
		cout << "Not found";
	}
	if (b.find("ngoc") != b.end())
	{
		cout << "found";
	}
	else {
		cout << "Not found";
	}
	// in 
	for (string x : b) {
		cout << x << " ";
	}
	cout << "\n";
	b.erase(" huynh");
	b.erase(b.find("ngoc"));
	for (string x : b) {
		cout << x << " ";
	}
	cout << "\n";
	for (auto it = b.begin(); it != b.end(); it++)
	{
		cout << *it << " ";

	}
	cout << "\n";
	for (set<string>::iterator it=b.begin(); it != b.end(); it++) {
		cout << *it << " ";
	}
	cout << b.size() << "\n";
	int n;
	cin >> n;
	set<int> a;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a.insert(x);
	}
	cout << "so luong phan tu khac nhau: " << a.size(); // tại vì trong set là những giá trị đều khác nhau nếu trùng thì tính 1
	set<int> c;
	for (int i= 0; i < 5; i++) {
	int x;
	cin >> x;
	c.insert(x);
	}
	for (int x : c) {
		cout << x << " ";
	}
	// multiset<datatype> x;
	// là một tập hợp có giá trị giống nhau 
	// lưu ý khi dùng erase thì sẽ xóa tất cả những giá trị giống nhau

	return 0;
}