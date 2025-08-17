#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return abs(a) > abs(b);//sắp xếp giảm dần
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    for(int x : a){
        cout << x << " ";
    }
}