#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    // int a[1000];
    // for(int i = 0; i < n; i++){
    //     cin >> a[i];
    // }
    // sort(a, a + n);//sắp xếp tăng dần
    // for(int i = 0; i < n; i++){
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    // sort(a, a + n, greater<int>());//sắp xếp giảm dần
    // for(int i = 0; i < n; i++){
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    // //vector
    // vector<int> v(n); 
    // sort(v.begin(), v.end());
    // for(int i = 0; i < n; i++){
    //     cout << a[i] << " ";
    // }
    //string
    // string s[n];
    // for(int i = 0; i < n; i++){
    //     cin >> s[i];
    // }
    // sort(s, s + n);//xếp theo bảng chữ cái
    // for(string x : s){
    //     cout << x << " ";
    // }
    //pair
    pair<int, int> a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a + n);
    cout << "After: \n";
    for(auto it : a){
        cout << it.first << " " << it.second << endl;
    }
    // stable_sort
    //sắp xếp theo thứ tự gt tuyệt đối
    
}