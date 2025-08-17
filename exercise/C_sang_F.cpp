#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
    int doC; cin >> doC;
    float doF = (doC * 9 / 5) + 32;
    cout << fixed << setprecision(2) << doF;
    return 0;
}
