#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
//lower_bound(iter1, iter2, key) [iter1, iter2) 
//=> trả về vị trí của first element => key

int main(){
    int n, x; cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    //nếu đổi thành vecto thì lower_bound(a .begin, a.end(), x)
    auto it = lower_bound(a, a + n, x);//tìm vị trí đầu tiene của pt >= X trong mang         
    if(it == a + n){
        cout << "Ko tim thay pt nao >= " << x << endl;
    } else
    cout << *it << endl;//giá trị số >= x trong mảng
    cout << it - a << endl;// vị trí
}