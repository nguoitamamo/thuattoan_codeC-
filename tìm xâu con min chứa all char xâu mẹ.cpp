#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
// trả về xâu con nn chứa tất cả các kí tự cửa xâu s
void check(string s) {
	map<char, int> mp;
	for (char x : s) mp[x]++;
	int ans = 0, k=0, left=0; 
	int m = 0;
	int a[256] = { 0 };
	for (int i = 0; i < s.length(); i++) {
		a[s[i]]++;
		if (a[s[i]] == 1) {
			k++;
		}
		if (k == mp.size()) {
			m = i;
			i = s.length();
			while (a[s[left]] > 1) {
				a[s[left]]--;
				left++;
			}
		}
	}
	cout << s.substr(left, static_cast<std::basic_string<char, std::char_traits<char>, std::allocator<char>>::size_type>(m) - left + 1);
	cout << " " << m - left + 1;
}
int main()
{
	string s; cin >> s;
	check(s);

	return 0;
}