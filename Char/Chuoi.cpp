#include <bits/stdc++.h>
using namespace std;

int main(){
    const int max = 4;
    char M[max];
    cout << "Moi nhap chuoi cach 1: ";
    cin.getline(M, max); //quy định max để tránh tràn bộ nhớ
    cout << M << endl;

    cin.clear();// xóa trạng thái lỗi
    cin.ignore(numeric_limits<streamsize>::max(),'\n');//có thể thay bằng một số vd:9999999999999999999999

    //Pointer
    char* M2;
    M2 = new char[max];
    cout << "Moi nhap chuoi cach 2: ";
    cin.getline(M2, max);
    cout << M2 << endl;
    return 0;
}