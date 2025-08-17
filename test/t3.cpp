#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    int count = 1;
    float TCC, TC, NMLT, NMTH, TA;
    double TB = (TCC + TC + NMTH + NMLT + TA) / 5;
    do{
    cin >> TCC >> TC >> NMLT >> NMTH >> TA;
    count++;
    cout << TB << endl;
    }
    while(count <= 5);
    return 0;
}