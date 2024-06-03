#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<map>
using namespace std;
void viet_hoa_all(string& a)
{
	for (int i = 0; i < a.length(); i++)
	{
		a[i] = toupper(a[i]);
	}
}
void viet_hoa_first(string& a)
{
	a[0] = toupper(a[0]);
	for (int i = 1; i < a.length(); i++)
	{
		a[i] = tolower(a[i]);
	}
}
int main()
{
	int i = 0;
	int n; cin >> n;
	cin.ignore();
	do
	{
		string a; getline(cin, a);
		stringstream s(a);
		string word;
		vector<string> v;
		while (s >> word)
		{
			v.push_back(word);
		}
		
		viet_hoa_all(v[v.size() - 1]);
		cout << v[v.size() - 1] << ", ";
		for (int i = 0; i < v.size() - 1; i++)
		{
			viet_hoa_first(v[i]);
			cout << v[i];
			if (i != v.size() - 2)
			{
				cout << " ";
			}
		}
		cout << "\n";
		i++;
	} while (i < n);

	return 0;
}
