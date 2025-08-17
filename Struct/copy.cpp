#include <bits/stdc++.h>
using namespace std;

struct Book{
    char TieuDe[100];
    char TacGia[100];
    float giaTien;
};

int main(){
    Book quyen1;
    cout << "Moi nhap vao ten sach: " << endl;
    cin.getline(quyen1.TieuDe, 100);
    cout << "Moi nhap vao tac gia: " << endl;
    cin.getline(quyen1.TacGia, 100);
    cout << "Moi nhap vao gia sach: " << endl;
    cin >> quyen1.giaTien;
    cout << endl;
    //copy tt của q1 vào q2
    Book quyen2 = quyen1;
    cout << "Profile quyen2: " << endl;
    cout << "Moi nhap vao ten sach: " << endl;
    cin.getline(quyen2.TieuDe, 100);
    cout << "Moi nhap vao tac gia: " << endl;
    cin.getline(quyen2.TacGia, 100);
    cout << "Moi nhap vao gia sach: " << endl;
    cin >> quyen2.giaTien;
    // đổi tt quyen 1
    quyen1.giaTien = 2006;
    cout << quyen1.giaTien << endl;
    cout << quyen2.giaTien << endl;
    return 0;
}