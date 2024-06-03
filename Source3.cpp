#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int a[6] = { 8,7,1,9,2,3 };
	int dem1 = 0;
	for (int i = 0; i < 6; i++) {
		for (int j = i + 1; j < 6; j++) {
			if (a[i] > a[j]) {
				dem1++;
			}
		}
	}
	cout << dem1;
	return 0;
}