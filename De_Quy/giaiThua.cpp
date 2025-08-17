#include <bits/stdc++.h>
using namespace std;

int giaiThua(int n){
    if(n <= 1)
        return 1;
    return n * giaiThua(n-1);
}

int main(){
    int a; cin >> a;
    cout << giaiThua(a);
    return 0;
}