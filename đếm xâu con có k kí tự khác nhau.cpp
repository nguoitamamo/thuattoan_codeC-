#include<iostream>
using namespace std;
int count(string s, int k)
{
	int ans = 0;
	for (int i = 0; i < s.length(); i++)
	{
		int cnt = 0;
		int dem[256]{};
		memset(dem, 0, sizeof(dem));
		for (int j = i; j < s.length(); j++)
		{
			if (dem[s[j]] == 0)
			{
				cnt++;
				dem[s[j]] = 1;
			}
			if (cnt == k)
			{
				ans++;
			}
			if (cnt > k)
			{
				break;
			}
		}

	}
	 return ans;
}
int main()
{
	string s; int k;
	cin >> s >> k;
	cout << count(s, k);
	return 0;
}