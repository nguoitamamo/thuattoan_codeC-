#include<iostream>
#include<string>
using namespace std;
void search(string &s1,string s2)
{   
	int dem1[256] = { 0 }, dem2[256] = { 0 };
	for (char x : s2)
	{
		dem2[x]++;
	}
	int cnt = 0, left = 0; int index = -1; int ans = INT_MAX;
	for (int i = 0; i < s1.length(); i++)
	{
		dem1[s1[i]]++;
		if (dem1[s1[i]] <= dem2[s2[i]])
		{
			cnt++;
		}
		if (cnt == s2.length())
		{
			while (dem1[s1[left]] > dem2[s1[left]] || dem2[s1[left]] == 0)
			{
				if (dem1[s1[left]] > dem2[s1[left]])
				{
					dem1[s1[left]]--;
				}
				left++;
			}
		}
		if (ans > i-left +1)
		{
			ans = i - left + 1;
			index =left;
		}
	}
	if (index == -1)
	{
		cout << "-1";
	}
	else 
	{
		cout << s1.substr(index, ans) << "\n";
	}
}
int main()
{  
	string s1, s2;
	cin >> s1 >> s2;
	search(s1,s2);
	return 0;
}