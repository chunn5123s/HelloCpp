#include <bits/stdc++.h>
using namespace std;

//cho mảng có n pt và số nguyên k, đối với mỗi dãy con liên tiếp có chiều dài k
// in ra pt max or min
//vd: in 10 3
// 1 5 7 9 3 6 9 2
// 7 9 9 9 9 9
int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int &x : a){
        cin >> x;
    }
    multiset<int> ms;
    for(int i = 0; i < k; i++){
        ms.insert(a[i]);
    }
     for(int i = k; i < n; i++){
        cout << *ms.rbegin() << "";//do multiset sắp xếp tăng dần nên in ra pt cuối cùng cũng như lớn nhất mảng k
        ms.erase(ms.find(a[i - k]));// xóa pt đầu và thêm 1 phần tử mới
        ms.insert(a[i]);
    }
    cout << *ms.rbegin() << endl;
}