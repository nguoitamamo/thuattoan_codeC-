#include<iostream>
#include <cstdlib>
#include <ctime>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
class donhang {
private:
    string model, sl, mdn;
public:
    donhang();
    friend ostream& operator << (ostream&, donhang);
    friend istream& operator >> (istream&, donhang&);
};
vector<donhang> v1;
vector< vector<donhang> > v;
donhang::donhang() {
    model = sl = mdn = "";
}
ostream& operator << (ostream& out, donhang a) {
    out << a.model << " " << a.sl << " " << a.mdn << "\n";
    return out;
}
istream& operator >> (istream& in, donhang& a) {
    in.ignore();
    getline(in, a.model);
    in.ignore();
    in >> a.sl;
    in >> a.mdn;
    return in;
}
int main()
{
    donhang a;
    cin >> a;
    cout << a;

    return 0;
}