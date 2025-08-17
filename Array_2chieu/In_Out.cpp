#include <bits/stdc++.h>
using namespace std;

int main(){
    int row = 4;
    int col = 3;
    int a[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << "Nhap mang [" << i << "][" << j << "] ";
            cin >> a[row][col];
        }
    }
    cout << endl;

    cout << "Mang vua nhap la: " << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << a[row][col] << " ";
        }
        cout << endl;
    }

    // xuất theo dòng
    int dong;
    cout << "Nhap dong muon xem: "; cin >> dong;
    for(int j = 0; j < col; j++){
        cout << a[dong][j] << "\t"; 
    }
}