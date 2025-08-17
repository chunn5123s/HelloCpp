#include <iostream>
#include <math.h>
using namespace std;

int tong1(int n);
float tong2(int n);
bool nt(int n);
bool check(int n);

int main() {
    int n;
    cin >> n;
    cout << "kq tong1: " << tong1(n) << endl;
    cout << "kq tong2: " << tong2(n) << endl;
    if(check(n))
    cout << 1 << endl;
    else cout << 0;
    return 0;
}

int tong1(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

float tong2(int n){
    float res = 0;
    for (int i=1; i <= n; i++){
        res += 1.0/i;
    }
    return res; 
}

bool nt(int n) {
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return n > 1;
}

bool check(int n) {
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    if(nt(sum)){
        return true;
    }
    else return false;
}
