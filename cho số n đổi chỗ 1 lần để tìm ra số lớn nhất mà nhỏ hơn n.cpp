#include<iostream>
#include<string>
using namespace std;
void check(string s)
{
	int i = s.length() - 2;
	while (s[static_cast<std::basic_string<char, std::char_traits<char>, std::allocator<char>>::size_type>(i) + 1] >= s[i] && i >= 0)
	{
		i--;
	}
	if (i == -1)
	{
		cout << "-1\n";
		return;
	}
	int j = s.length() - 1;
	while (s[j] >= s[i] || s[j] < s[i] && s[j] == s[static_cast<std::basic_string<char, std::char_traits<char>, std::allocator<char>>::size_type>(j) - 1])
	{
		j--;
	}
	swap(s[i], s[j]);
	if (s[0] == 0)
	{
		cout << "-1\n";
	}
	else
	{
		cout << s;
	}
}
int main()
{
	string s;
	getline(cin, s);
	check(s);
	return 0;
}