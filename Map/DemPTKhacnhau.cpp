#include <bits/stdc++.h>
using namespace std;

int main(){
    //đếm có bao nhiêu pt ko tính trùng nhau
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        set<int> s;
        for(int i =0; i < n; i++){
            int x; cin >> x;
            s.insert(x);
        }
        cout << s.size();// set ko lưu pt trùng nhau nên in ra được số pt khác nhau
    }
        //MAP
    while(t--){
        int n; cin >> n;
        map<int, bool> mp;
        for(int i =0; i < n; i++){
            int x; cin >> x;
            mp[x] = true;//gt đã được nhập, nếu gặp lần hai ko tính vì đã gán cho lần đầu
        }
        cout << mp.size();// in ra số lượng key trong map
    }
        //Array
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int &x : a){
            cin >> x;
        }     
        sort(a, a + n);// hàm sắp xếp mảng a tăng dần
        int count = 1;
        for(int i = 0; i < n; i++){
            if(a[i] != a[i + 1]){//nếu pt đầu khác pt tiếp theo
                count++;//biến đếm tăng 1pt
            } else return;//nếu giống nhau thì end looploop
        }
        cout << count << endl;
    }
    return 0;
}