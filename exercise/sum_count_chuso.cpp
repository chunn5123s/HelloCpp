#include <iostream>
using namespace std;
int main () {
    int n; cin >> n;
    int sum = 0;
    while (n!=0){
        sum += n % 10;        
        n /= 10;            
    } cout << sum;        
    return 0;               
}
/*
vd: n=1234 chia dư cho 10 = 4, chia hết cho 10 còn 123 biến, sum += 4
123 chia dư cho 10 = 3, chia hết cho 10 còn 12, biến sum += 3 => 7
12 chia dư cho 10 = 2, chia hết cho 10 còn 1, biến sum += 2 => 9
1 chia dư cho 10 = 1, chia hết cho 10 còn 0, biến sum += 1 => 10
*/