#include <bits/stdc++.h>
using namespace std;

void giam(int a[100], int n);
void tang(int a[100], int n);

int main(){
    int a; cin >> a;
    int b[100];
    for(int i = 0; i < a; i++){
        cin >> b[i];
    }
    giam(b, a);
    cout << "mang sau khi giam la: ";
    for(int i = 0; i < a; i++){
        cout << b[i] << " ";
    }
    cout << endl;
    tang(b, a);
    cout << "mang sau khi tang la: ";
    for(int i = 0; i < a; i++){
        cout << b[i] << " ";
    }
    cout << endl;

    // đảo ngược mảng
    int mang[5] = {1,6,9,3,8};
    reverse(mang, mang + size(mang));
    cout << "giam cach 2: ";
    for(int i = 0; i < size(mang); i++){
        cout << mang[i] << " ";
    }
    cout << endl;

    // tăng cách 2
    int mang2[5] = {1,6,9,3,8};
    sort(mang2, mang2 + size(mang2));
    cout << "tang cach 2: ";
    for(int i = 0; i < size(mang2); i++){
        cout << mang2[i] << " ";
    }
    return 0;
}

void giam(int a[100], int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void tang(int a[100], int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}