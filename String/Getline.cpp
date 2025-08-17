#include <bits/stdc++.h>
using namespace std;
//substr : cắt kí tự
//stoi : chuyển xâu thành số int
//stoll : chuyển xâu thành số longlong
//to_string : chuyển số thành xâu
int main(){
    // int n; cin >> n;
    // cin.ignore();
    string s;
    getline(cin, s);
    cout << s << endl;
    string a = "Lam ";
    string b = "Hoang ";
    string c = "Tuan";
    string fullname = a + b + c; //nối xâu
    cout << fullname << endl;

    cout << a.compare(b) << endl;
        /*
        a < b : -1
        a > b : 1
        a == b : 0
        */
    string cut = fullname.substr(3, 12);//cắt bắt đầu từ pt thứ 2 và cắt 12 kt
    cout << cut << endl;
    return 0;
}