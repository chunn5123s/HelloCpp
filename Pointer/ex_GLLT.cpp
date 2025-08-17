#include <bits/stdc++.h>
using namespace std;

// hoán vị 2 biến a, b
void change(double &a, double &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    double c, d;
    cin >> c >> d;  
    change(c, d);
    cout << "Sau khi doi c = " << c << " d = " << d << endl;
    return 0;
}