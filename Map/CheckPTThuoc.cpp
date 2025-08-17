//đếm những pt thuộc mảng thứ nhất mà không thuộc mảng thứ hai
// nếu ko có số nào in ra not found
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for(int &x : a){
            cin >> x;
        }
        set<int> s;
        for(int i = 0; i < m; i++){
            int x; cin >> x;
            s.insert(x);
        }
        bool ok = false;
        for(int x : a){//duyệ các pt trong mảng a
            if(s.find(x) == s.end()){//nếu tìm thấy pt x thuộc set
                cout << x << " ";//in ra pt đó
                ok = true;//tìm thấy
            } 
        }
        if(!ok) cout << "NOT FOUND!\n";
    }
        //MAP
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for(int &x : a){
            cin >> x;
        }
        map<int, bool> mp;
        for(int i = 0; i < m; i++){
            int x; cin >> x;
            mp[x] = true;//x có tồn tại trong mảng b
        }
        bool ok = false;
        for(int x : a){//duyệ các pt trong mảng a
            if(mp.find(x) == mp.end()){//nếu tìm thấy pt x thuộc mapmap
                cout << x << " ";//in ra pt đó
                ok = true;//tìm thấy
            } 
        }
        if(!ok) cout << "NOT FOUND!\n";
    }
    return 0;
}