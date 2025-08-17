#include <bits/stdc++.h>
using namespace std;
int main(){
    // map<int, int> mp;
    int n; cin >> n;
    // for(int i = 0; i < n; i++){
    //     int x; cin >> x;
    //     mp[x]++;// lưu key nhập vào và tăng value
    // }
    // for(auto it : mp){
    //     cout << it.first << " " << it.second << endl;//xuất key và value
    // }
        //or
    // int a[100];
    // for(int i = 0; i < n; i++){
    //     cin >> a[i];
    //     mp[a[i]]++;
    // }
    // for(int i = 0; i < n; i++){
    //     if(mp[a[i]] != 0){//tăng i lên 1 a[2]=1, mp[1] do đã xử lí rồi và gán = 0 nên bỏ qua
    //         cout << a[i] << " " << mp[a[i]] << endl;//a[0]=1, mp[1]=3
    //         mp[a[i]] = 0;//gán mp[1] = 0
    //     }
    // }
    // cout << endl;

    //string
    map<string, int> mp2;
    for(int i = 0; i < n; i++){
        string x; cin >> x;
        mp2[x]++;
    }
    int max = 0;
    string res;
    for(auto x : mp2){
        if(x.second > max){// xét tất cả pt cái nào lớn hơn lưu cho max đến hết
            max = x.second;//lưu value = max
            res = x.first;//lưu key = res
        }
    }
    cout << res << " " << max << endl;// xuất ra từ xuất hiện nhiều nhất
        //or
    string a[1000];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp2[a[i]]++;
    }
    for(int i = 0; i < n; i++){
        if(mp2[a[i]] != 0){
            cout << a[i] << " " << mp2[a[i]] << endl;
            mp2[a[i]] = 0;
        }
    }
    return 0;
}