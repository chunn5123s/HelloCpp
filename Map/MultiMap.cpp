//Lưu nhiều key giống nhau
//theo thứ tự từ nhỏ đến lớn
#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int, int> mp;//theo thứ tự từ lớn đến bé
    mp.insert({1, 100});
    mp.insert({2, 200});
    mp.insert({2, 300});//nếu muốn erase thì phỉa thông qua iterator
    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }
    cout << mp.count(2) << endl;// xem có bao nhiêu key = 2 

}