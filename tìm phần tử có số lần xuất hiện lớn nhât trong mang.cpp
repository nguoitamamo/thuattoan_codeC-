#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	map<string, int> mp;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		string x;
		cin >> x;
		mp[x]++;
	}
	string key;
	int max_value = 0;
	for (auto x : mp) {
		if (x.second > max_value) {
			max_value = x.second;
			key = x.first;
		}
	}
	cout << key << " " << max_value << "\n";
	// nếu có hai value bằng nhau thêm dấu bằng thì sẽ lấy key lớn hơn theo bảng chữ cái
	// nếu muốn lưu nhiều key giống nhau thì dùng multimap
	// hoặc có thể dùng unoder_map không quan tâm thứ tự
	return 0;
}