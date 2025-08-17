#include <bits/stdc++.h>
using namespace std;

int main(){
    char S[100] = "Hello, ";
    char M[] = "World!";
    strcat_s(S, M); // nối 2 chuỗi lại với nhau
    cout << "Chuoi sau khi noi la: " << S << endl;

    char S1[100], M1[100];
    cout << "Hay nhap vao chuoi 1: ";
    cin.getline(S1, 100);
    cout << "Hay nhap vao chuoi 2: ";
    cin.getline(M1, 100);
    strcat_s(S1, M1);
    cout << "Chuoi sau khi noi la: " << S1 << endl;

    //copy n kt
    char S2[100] = "Hello, ";
    char M2[] = "World!";
    strncat_s(S2, sizeof(S2), M2, 2);
    cout << "Mang sau khi copy la: " << S2;
    return 0;
}

