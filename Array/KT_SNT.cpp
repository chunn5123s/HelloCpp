#include <iostream>
#include <math.h>
using namespace std;

bool nt(int n){
    for(int i = 2; i < sqrt(n); i++){
        return false;
    }
    return n > 1;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(nt(a[i])){
            cout << a[i] << " ";
        }
    }
    return 0;
}

