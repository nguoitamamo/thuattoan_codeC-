#include<iostream>
#include<vector>
using namespace std;
int partition(int a[], int l, int  r)
{
	int pivot = a[r];
	int i = l - 1;
	for (int j = l; j <= r - 1; j++)
	{
		if (a[j] < pivot)
		{
			i++;
			swap(a[i], a[j]);
		}
	}
	i++;
	swap(a[i], a[r]);
	return i;
}
void quicksort(int a[], int l, int r)
{
	if (l >= r) return;
	int x = partition(a, l, r);
	quicksort(a, l, x - 1);
	quicksort(a, x + 1, r);
}
int main()
{
	int n; cin >> n;
	int a[1000] = {};
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 1000;
	}
	quicksort(a, 0, n - 1);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}