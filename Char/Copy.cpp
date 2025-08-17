#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main(){
    char M1[] = "hoang tuan dep zai";
    char M2[50];
    strcpy_s(M2, sizeof(M2), M1);// coppy chuỗi M1 vào M2
    cout << "M1: " << M1 << endl;
    cout << "M2: " << M2 << endl;

    //copy n kt
    char M3[] = "hello chi ca";
    char M4[20];
    strncpy_s(M4, sizeof(M4), M3, 5);  
    cout << "M3: " << M3 << endl;
    cout << "M4: " << M4 << endl;
    return 0;
}
 