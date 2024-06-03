#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int s1[100] = {};
	int s2[100] = {};
	for (int i = 0; i < n; i++) cin >> s1[i];
	for (int j = 0; j < m; j++) cin >> s2[j];
	int i = 0, j = 0;
	while (i < n && j < m)
	{
		if (s1[i] <= s2[j])
		{
			cout << "a" << i + 1 << " ";
			i++;
		}
		else
		{
			cout << "b" << j + 1 << " ";
			j++;
		}
	}
	while (i < n)
	{
		cout << "a" << i + 1 << " ";
		i++;
	}
	while (j < m)
	{
		cout << "b" << j + 1 << " ";
		j++;
	}
	return 0;
}