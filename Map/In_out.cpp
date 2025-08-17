#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, int> mp;
    mp[100] = 200; // key là 100
    mp[200] = 300;
    mp.insert({300, 400});
    mp.insert({400, 500});
    cout << mp.size() << endl;
    mp[100] = 300; // thay thế value của key 100, key không được trùng nhau
    for (pair<int, int> x : mp) {
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;

    // Sử dụng auto
    for (auto it : mp) {
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;

    // Sử dụng iterator
    for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++) {
        cout << (*it).first << " " << (*it).second << endl;
    }
    //count
    if(mp.count(100) != 0){//tìm key 100, nếu đếm số 100 bằng 0 thì 0 tìm thấy
        cout << "Found!\n";
    } else cout << "Not Found!\n";
    //find
    if(mp.find(500) != mp.end()){//tìm key 100, nếu tìm 100 có sau các pt của end() thì tìm thấy
        cout << "Found!\n";
    } else cout << "Not Found!\n";
    mp.erase(100);// xóa cặp key và value
    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}
