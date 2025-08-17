#include <bits/stdc++.h>
using namespace std;

int main(){
    multiset<int> ms;
    ms.insert(100);
    ms.insert(200);
    ms.insert(300);
    ms.insert(100);
    cout << ms.size() << endl;
    ms.erase(100);// xóa hết phần tử 100 trong multiset
    for(int x : ms){
        cout << x << " ";
    }
    cout << endl;
    cout << ms.count(200);//in ra số lượng 200 trong multiset
    return 0;
}