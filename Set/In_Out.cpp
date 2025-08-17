#include <bits/stdc++.h>
#include <set>
using namespace std;
//insert : thêm phần tử vào trong set
// find
// count
//erase
int main(){
    set<int> s;
    // s.insert(100);
    // s.insert(200);
    // s.insert(300);
    // s.insert(300);
    // s.insert(300);// KO LƯU PT TRÙNG NHAU
    // cout << s.size();
    
    for(int i = 0; i < 10; i++){
        s.insert(i);
    }
    cout << s.size() << endl;
    if(s.count(11) != 0){// tìm xem "5" có trong set ko
        cout << "Found!";
    } else cout << "Not Found!";
    //or
    cout << endl;
    if(s.find(2) != s.end()){// trả về interator s.end() là đến pt sau pt cuối cùng
        cout << "Found!";
    } else cout << "Not Found!";
    // xóa pt
    cout << endl;
    for(int i = 0; i < 10; i++){
        s.insert(i);
    }
    s.erase(3);// xóa trực tiếp
    cout << s.size() << endl;
    s.erase(s.find(5));// xóa thống qua vị trí interator trong set
    for(int x : s){
        cout << x << " ";
    }
    //truy cập vào pt đầu tiên s.begin() // cuối cungf s.rbegin()
    cout << endl;
    // duyệt set
    for(auto x : s){
        cout << x << " ";
    }
    cout << endl;
    for(set<int>::iterator it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}