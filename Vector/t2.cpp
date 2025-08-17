#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    cout << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout <<"\n";
    for(int a : v){
        cout << a << " ";
    }
}