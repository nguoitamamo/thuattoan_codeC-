


// hàm sort : sắp xếp theo thứ tự tăng dần 
// sort( a, a+n)  a: là tên mảng n: số lượng phần tử mảng
// sắp xếp trên một đoạn vd: a[x] --> a[y] 
// sort( a+x,a+y+1);
// nếu muốn sắp xếp giảm dần: sort(a,a+n,greater<int>())
// nếu dùng vector: vector<int> a(n);
// sort(a.begin(), a.end()) tương tự nếu muốn giảm dần thêm greater()
// tùy theo datatype mà bạn muốn
#include<iostream>
#include<map>
//#include<set>
#include<algorithm>
#include<string>
using namespace std;
int main()
{    
	/*int n;
	cin >> n;
	int i = 0;
	do {
		int a;
		cin >> a;
		int* b = new int[a];
		for (int i = 0; i < a; i++) {
			cin >> b[i];
		}
		/*for (int i = 0; i < a - 1; i++) {
			for (int j = i + 1; j < a; j++) {
				if (b[i] > b[j]) {
					int tmp = b[i];
					b[i] = b[j];
					b[j] = tmp;
				}
			}
		}
		sort(b, b + a);
		int dem = 1;
		for (int i = 0; i < a - 1; i++) {
			if (b[i] != b[i + 1]) {
				dem++;
			}
		}
		cout << "so luong phan tu khac nhau: " << dem << "\n";
		i++;
	} while (i < n);

	// sắp xếp trong một xâu
	string a;
	getline(cin, a);
	sort(a.begin(), a.end());
	cout << a; */
	int b[100];
	int n; cin >> n;
	map<int, int > m;
	for (int i = 0; i < n; i++)
	{
		int d; cin >> d;
		int c; cin >> c;
		fflush(stdin);
		m[d] = c;
	}
	sort(b, b + n);
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
		cout << (*it).first << " " << (*it).second << "\n";
	}

	return 0;
}