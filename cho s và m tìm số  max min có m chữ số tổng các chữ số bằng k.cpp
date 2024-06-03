#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int s, m;
	cin >> s >> m;
	if (s > 9 * m || s == 0 && m >1 )
	{
		cout << "-1-1";
		return 0;
	}
	else
	{
		vector<int> lon(m);
		vector<int> be(m);
		int tmp = s;
		for (int i = 0; i < m; i++)
		{   if(tmp>=9)
			{
				lon[i] = 9;
				tmp -= 9;
			}
			else
			{
				lon[i] = tmp;
				tmp -= tmp;
			}

		}
		s--;
		for (int i = m-1; i >=0; i--)
		{
			if (s >= 9)
			{
				be[i] = 9;
				s -= 9;
			}
			else
			{
				if (i == 0)
				{
					be[i] = s + 1;
				}
				else
				{
					be[i] = s;
					s -= s;
				}
			}
		}
		for (int x : lon)
		{
			cout << x;
		}
		cout << " ";
		for (int x : be)
		{
			cout << x;
		}
	}

	return 0;
}