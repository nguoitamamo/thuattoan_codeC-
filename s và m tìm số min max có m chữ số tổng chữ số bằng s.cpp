#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int s, m;
	cin >> m >> s;
	if (s > 9 * m || m > 1 && s == 0)
	{
		cout << "-1 -1";
		return 0;
	}
	else
	{   
		vector<int> lon(m);
		vector<int> be(m);
		int tmp = s;
		for (int i = 0; i < m; i++)
		{
			if (s >= 9)
			{
				lon[i] = 9;
				s -= 9;
			}
			else if (s != 0)
			{
				lon[i] = s;
				s -= s;
			}
			else
			{
				break;
			}
		}
		tmp--;
		for (int i = m - 1; i > 0; i--)
		{
			if (tmp >= 9)
			{
				be[i] = 9;
				tmp -= 9;
			}
			else if (tmp != 0)
			{
				be[i] = tmp;
				tmp = 0;
			}
			else
			{
				break;
			}
		}
		be[0] = tmp + 1;
		for (int x : be)
		{
			cout << x;
		}
		cout << " ";
		for (int x : lon)
		{
			cout << x;
		}
	}
	return 0;
}