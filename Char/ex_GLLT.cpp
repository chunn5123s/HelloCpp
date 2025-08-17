#include <bits/stdc++.h>
using namespace std;

int main(){
    char a[100];
    cout << "nhap vao kt trong mang: ";
    cin.getline(a, 100);
    for(int i = 0; i < strlen(a); i++){
        cout << a[i] << " Ma ASCII la " << (int)a[i] << endl;
    }

    //đảo ngược
    reverse(a, a + strlen(a));
    cout << "Mang sau khi dao nguoc la: ";
    for(int i = 0; i < strlen(a); i++){
        cout << a[i];
    }
}