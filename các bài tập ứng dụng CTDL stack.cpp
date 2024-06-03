#include<iostream>
#include<stack>
#include<string>
#include<sstream>
#include<vector>
using namespace std; 
int main()
{
	/*int n; cin >> n;
	stack<int> st;
	while (n != 0) {
		st.push(n % 2);
		n /= 2;
	}
	while (!st.empty()) {
		cout << st.top();
		st.pop();
	}
	string s; getline(cin, s);
	stack<string > st;
	stringstream ss(s);
	string word;
	while (ss >> word) {
		st.push(word);
	}
	while (!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}
	string s; getline(cin, s);
	stack< char > st;
	for (char x : s) {
		if (x == '(') {
			st.push(x);
		}
		else {
			if (st.empty()) {
				cout << "Ko hop le" << "\n";
				return 0;
			}
			else {
				st.pop();
			}
		}
	}
	if (st.empty()) {
		cout << "Hop le";
	}
	else {
		cout << "Ko hop le";
	}
	// bài toán về Next greater element
	int n; cin >> n;
	stack<int> st;
	vector<int> a(n);
	vector<int> b(n);
	for (auto& x : a) cin >> x;
	for (int i = 0; i < n; i++) {
		if (st.empty()) {
			st.push(i);
		}
		else {
			while (!st.empty() && a[st.top()] < a[i]) {
				b[st.top()] = a[i];
				st.pop();
			}
			st.push(i);
		}
	}
	while (!st.empty()) {
		b[st.top()] = -1;
		st.pop();
	}
	for (auto x : b) cout << x << " ";*/
	// Diện tích hình chữ nhật lớn nhất trong biểu đồ

	int n; cin >> n;
	stack< int > st;
	vector<int> v(n);
	for (auto& x : v) cin >> x;
	int value = INT_MIN;
	int i = 0;
	while (i < n) {
		if (st.empty() && v[st.top()] < v[i]) {
			st.push(i);
			i++;
		}
		else {
			int index = st.top();
			st.pop();
			if (st.empty()) {
				value = max(value, i * v[index]);
			}
			else {
				value = max(value, v[index] * (i - 1 - st.top()));
			}
		}
	}
	while (!st.empty()) {
		int index = st.top();
		st.pop();
		if (st.empty()) {
			value = max(value, i * v[index]);
		}
		else {
			value = max(value, v[index]*(i - 1 - st.top()));
		}
	}
	cout << value << " ";
	return 0;
}