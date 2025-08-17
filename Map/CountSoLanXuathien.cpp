//in ra số xuất hiện nhiều nhất và số lần xuất hiện
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        map<long long, int> mp;
        for(int i =0; i < n; i++){
            long long x; cin >> x;
            mp[x]++;
        }
        long long res, max = 0;
        for(auto it : mp){
            if(it.second > max){//nếu sốsố lần xuất hiện lớn hơn thì cứ thay phiên gán cho max
                max = it.second;
                res = it.first;
            }
        }
        cout << res << " " << max << endl;
    }
}