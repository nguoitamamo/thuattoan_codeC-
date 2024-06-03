/*
 tần sất xuất hiện của phần tử trong mảng
 khai báo thư viện (#include<map>)
 khai bao: map<datatype1, datetype2) mp;
 datatype1: kiểu dữ liệu của key
 datatype2: kiểu dữ liệu của value
 key laf duy nhất còn value thì không

 thêm, duyệt




*/ //timf kiếm
#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	map<int, bool> mp;
	// thêm vào phần tử 
	mp[10] = false;
	mp.insert({ 100, true });
	// duyệt in từng phần tử
	for (auto  it : mp) {
		cout << it.first << " " << it.second << "\n";
	}
	for (pair<int, bool> x : mp) {
		cout << x.first << " " << x.second << "\n";
	}
	// tìm kiếm phần tử
	if (mp.count(10) != 0) { // co 10  thì found
		cout << "found\n";
	}
	else{
		cout << "Not found\n";
	}
	if (mp.find(1000) != mp.begin()) { // có 1000 thì Not found
		cout << "found\n";
	}
	else {
		cout << "Not found\n";
	}


	return 0;
}
