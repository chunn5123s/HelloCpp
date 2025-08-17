#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main (){
    long long n; cin >> n;
    /*
    có thể dùng công thức:
    n * (n + 1) / 2
    */
    long long sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i;
    }
    cout << sum;
    return 0;
}
