#include <iostream>
using namespace std;
int main () {
    int n; cin >> n;
    int count = 0;
    while (n!=0){
        count++;        
        n /= 10;            
    } cout << count;        
    return 0;               
}
/*
vd: n=1234 chia cho 10 còn 123 biến count + 1 đv
123 chia cho 10 còn 12 biến count + thêm 1 đv
12 chia cho 10 còn 1 biến count + thêm 1 đv
1 chia cho 10 còn 0 biến count + thêm 1 đv
*/