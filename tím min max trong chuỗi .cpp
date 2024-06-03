#include<iostream>
#include<set>
using namespace std;
set<int> s;
void tinh(string a)
{
	int min_value = INT_MIN;
	int ans = 0;
	int sum = 0;
	for (char x : a)
	{
		if (isdigit(x))
		{
			sum =sum*10 + x - '0';
		}
		else
		{
			ans = max(min_value, sum);
			sum =0;
		}
	}
	ans = max(sum, ans);
	cout << ans;
}
int main()
{
	int n; cin >> n;
	int i = 0;
	do
	{
		string a;
		cin >> a;
		tinh(a);
		i++;
	} while (i < n);
	return 0;
}