#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
// tìm xâu con min của s1 chứa tất cả char xâu s2
void check(string s1, string s2) {
	int a[256] = { 0 };
	for (char x : s2) a[x]++;
	int ans = 0, left = 0, k = 0, index = -1;
	int b[256] = { 0 };
	for (int i = 0; i < s1.length(); i++) {
		b[s1[i]]++;
		if (b[s1[i]] <= a[s1[i]]) {
			k++;
		}
		if (k == s2.length()) {
			ans = i;
			i = s1.length();
			while (b[s1[left]] > a[s1[left]] || a[s1[left]] == 0) {
				if (b[s1[left]] > a[s1[left]]) {
					b[s1[left]]--;
				}
				left++;
			}
			index = left;
		}
	}
	if (index == -1) cout << "-1";
	else cout << s1.substr(index, static_cast<std::basic_string<char, std::char_traits<char>, std::allocator<char>>::size_type>(ans) - index + 1);
}
int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	check(s1, s2);
	return 0;
}