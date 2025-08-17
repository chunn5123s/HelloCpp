#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t; //số test case
    // while(t--){
    //     int n; cin >> n; // nhập số lượng pt
    //     int a[n]; 
    //     for(int &x : a){
    //         cin >> x;
    //     }
    //     sort(a, a + n);
    //     int q; cin >> q;//nhập số lần truy vấn
    //     while(q--){
    //         int x; cin >> x; // số muốn truy vấn
    //         if(binary_search(a, a + n, x)){
    //             //nếu x xuất hiện trong mảng thì in ra Yes/No
    //             cout << "Yes!\n";
    //         } else cout << "No!\n";
    //     }
    // }
        //SET
    while(t--){
        int n; cin >> n;
        set<int> s;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            s.insert(x);
        }
        int q; cin >> q;
        while(q--){
            int x; cin >> x;
            if(s.find(x) != s.end()){//nếu biến find tìm ko thấy x
                cout << "Yes!\n";
            } else cout << "No!\n";
        }
    }
        //MAP
    while(t--){
        int n; cin >> n;
        map<int, bool> mp;
        for(int i =0; i < n; i++){
            int x; cin >> x;
            mp[x] = true;
        }
        int q; cin >> q;
        while(q--){
            int x; cin >> x;
            if(mp.count(x) == 1){//nếu biến count đếm trong set có 1 pt
                cout << "Yes!\n";
            } else cout << "No!\n";
        }
    }
}