#include<iostream>
#include<string >
using namespace std;
int main()
{
	string s, t; getline(cin, s); getline(cin, t);
	int a[256] = { 0 };
	int b[256] = { 0 };
	for (char x : t) {
		b[x]++;
	}
	int dem = 0, ans = 0, left = 0, index = -1;
	for (int i = 0; i < s.length(); i++) {
		a[s[i]]++;
		if (a[s[i]] <= b[s[i]]) {
			dem++;
		}
		if (dem == t.length()) {
			ans = i;
			i = s.length() - 1;
			while (a[s[left]] > b[s[left]] || b[s[left]] == 0) {
				if (a[s[left]] > b[s[left]]) {
					a[s[left]]--;
				}
				left++;
			}
		}
	}
	cout << s.substr(left, static_cast<std::basic_string<char, std::char_traits<char>, std::allocator<char>>::size_type>(ans) - left + 1);
	cout << "\n" <<  ans - left + 1;
	return 0;
}