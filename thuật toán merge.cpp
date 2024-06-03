#include<iostream>
#include<vector>

using namespace std;
void merge(int a[], int l ,int r )
{  
	int m = (l + r) / 2;
	vector<int> x(a + l, a + m);
	vector<int> y(a + m + 1, a + r);
	int i = 0, j = 0;
	while (i < x.size() && j < y.size())
	{
		if (x[i] <= y[j])
		{
			a[l] = x[i]; i++; l++;
		}
		else
		{
			a[l] = y[j]; j++; l++;
		}
	}
	while (i < x.size())
	{
		a[l] = x[i]; l++; i++;
	}
	while (j < y.size())
	{
		a[l] = y[j]; j++; l++;
	}
}
void mergesort(int a[], int l, int r)
{
	if (l >= r) return;
	int m = (l + r) / 2;
	mergesort(a, l, m);
	mergesort(a, m + 1, r);
	merge(a, l, r);
}
int main()
{
	int n; cin >> n;
	int a[1000] = {};
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 1000;
	}
	mergesort(a, 0, n-1);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}