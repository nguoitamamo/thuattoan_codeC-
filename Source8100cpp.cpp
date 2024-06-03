#include<iostream>
#include<map>
using namespace std;
int main()
{
	string s; cin >> s;
	map<char, int> mp;
	for (char x : s) {
		mp[x]++;
	}
	int a[256] = { 0 };
	int dem = 0, ans = 0, left = 0;
	for (int i = 0; i < s.length(); i++) {
		a[s[i]]++;
		if (a[s[i]] == 1) {
			dem++;
		}
		if (dem == mp.size()) {
			ans = i;
			i = s.length();
			while (a[s[left]] > 1) {
				a[s[left]]--;
				left++;
			}
		}
	}
	cout << s.substr(left, static_cast<std::basic_string<char, std::char_traits<char>, std::allocator<char>>::size_type>(ans) - left + 1);
	return 0;
}