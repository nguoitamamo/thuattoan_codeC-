#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void check(string s1, string s2)
{
	int dem1[256] = { 0 };
	int dem2[256] = { 0 };
	for (char x : s2)
	{
		dem2[x]++;
	}
	int i = 0;
	int cnt = 0, left = 0, ans =0, index = -1;
	for (int i = 0; i < s1.length(); i++)
	{
		dem1[s1[i]]++;
		if (dem1[s1[i]] <= dem2[s1[i]])
		{
			cnt++;
		}
		if (cnt == s2.length())
		{
			ans = i;
			i = s1.length();
			while (dem1[s1[left]] > dem2[s1[left]] || dem2[s1[left]] == 0)
			{
				if (dem1[s1[left]] > dem2[s1[left]])
				{
					dem1[s1[left]]--;
				}
				left++;
			}
			index = left;
		}
	}
	if (index == -1) cout << "-1";
	else cout << s1.substr(index, static_cast<std::basic_string<char, std::char_traits<char>, std::allocator<char>>::size_type>(ans) - left + 1);

}
int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	check(s1, s2);
	return 0;
}