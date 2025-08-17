#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main (){
    int n; cin >> n;
    /*
    có thể dùng công thức:
    n * (n + 1) * (2 * n + 1) / 6
    */
    int sum = 0;
    for (int i = 1; i <= n; i++){
        int square = pow(i,2);
        sum += square;
    } cout << sum;
    return 0;
}