#include<iostream>
using namespace std;
struct ten{
	//menber
	// có thể là các biến
	// cũng có thể là hàm 
	// đặc biệt còn có constructor
};
struct sophuc {
	int a, b;
	// nạp chồng toán tử
	// kieu_tra_ve operator( + - .. ) (danh sach tham so){}
	/*sophuc operator + (const sophuc other) {
		sophuc tong{};
		tong.a = a + other.a;
		tong.b = b + other.b;
		return tong;
	}*/
	friend sophuc operator + (const sophuc x, const sophuc y) {
		sophuc tong{};
		tong.a = x.a + y.a;
		tong.b = x.b + y.b;
		return tong;
	}
	/*bool operator == (const sophuc other) {
		return a = other.a, b = other.b;
	}*/
	friend bool operator == (const sophuc x, const sophuc y) {
		return x.a == y.a &&  x.b == y.b;
	}
	// insertinon >>
	friend istream& operator >> (istream& in, sophuc& x) {
		in >> x.a >> x.b;
		return in;
	}								
	// extraction << 
	friend ostream& operator << (ostream& out, sophuc x) {
		out << x.a << " " << x.b;
		return out;
	}
};
int main()
{
	sophuc a, b;
	cin >> a >> b;
	if (a ==b) {
		cout << "YES\n";
	}
	else cout << "NO\n";

	return 0;
}