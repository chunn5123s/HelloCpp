#include <bits/stdc++.h>
using namespace std;

int main(){
    char thuong = 'a';
    char hoa = toupper(thuong);
    cout << "kt viet hoa la " << hoa << endl;
    // mã ASCII
    char thuong2 = 65;
    cout << toupper(thuong2) << endl;

    //lower
    char hoa1 = 'A';
    char thuong3 = tolower(hoa1);
    cout << thuong3 << endl;

    //exercise
    char kt[100];
    cout << "moi nhap vao chuoi kt: ";
    cin.getline(kt, 100);
    for(int i = 0; i < strlen(kt); i++){
        kt[i] = tolower(kt[i]);
    }
    cout << "chuoi sau khi in thuong la: " << kt << endl;
    for(int i = 0; i < strlen(kt); i++){
        kt[i] = toupper(kt[i]);
    }
    cout << "chuoi sau khi in hoa la: " << kt << endl;
    return 0;
}