#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	string a; getline(cin, a);
	map<char, int> mp;
	for (int i = 0; i < a.length(); i++)
	{
		mp[a[i]]++;
	}
	int cnt = a.length();
	for (auto &x : mp) {
		cnt += ((x.second * (x.second - 1)) / 2);
		// lấy 2 kí tự trong n kí tự giống nhau thì tổ hợp chập 2 của n
	}
	cout << cnt;
	return 0;
}
/* cách giải bằng mảng đánh dấu
string a;
	getline(cin, a);
	int b[256] = { 0 };
	for (char x : a)
	{
		b[x]++;
	}
	int cnt = a.length();
	for (int i = 0; i < 256; i++)
	{
		if (b[i] != 0)
		{
			cnt += ((b[i] * (b[i] - 1)) / 2);
		}
	}
	cout << cnt;
*/