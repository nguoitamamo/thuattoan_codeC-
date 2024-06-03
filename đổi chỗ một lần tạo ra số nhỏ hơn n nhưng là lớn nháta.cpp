#include<iostream>
#include<string>
using namespace std;
void chuyen(string a)
{
	int i = a.length() - 2;
	while (a[i] <= a[static_cast<std::basic_string<char, std::char_traits<char>, std::allocator<char>>::size_type>(i) + 1] && i>=0)
	{
		i--;
	}
	if (i == -1)
	{
		cout << "-1";
		return;
	}
	int j = a.length() - 1;
	while (a[j] >= a[i] || a[j] < a[i] && a[j] == a[static_cast<std::basic_string<char, std::char_traits<char>, std::allocator<char>>::size_type>(j) - 1])
	{
		j--;
	}
	swap(a[i], a[j]);
	if (a[0] == 0)
	{
		cout << "-1";
	}
	else
	{
		cout << a;
	}
}
int main()
{
	string a;
	getline(cin, a);
	chuyen(a);
	

	return 0;
}