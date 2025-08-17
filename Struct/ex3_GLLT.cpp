#include <bits/stdc++.h>
using namespace std;

struct PhanSo{
    int tu, mau;
};

//hàm tìm ước chung lớn nhất
int UCLN(int a, int b){
    a = abs(a);
    b = abs(b);
    if(b == 0) return a;
    return UCLN(b, a % b);
}

//hàm tối giản
void ToiGian(PhanSo& ps){// thay đổi gt khi ra khỏi hàm
    int ucln = UCLN(ps.tu, ps.mau);
    ps.tu /= ucln;
    ps.mau /= ucln;
}

//cộng phân số
PhanSo Cong(PhanSo ps1, PhanSo ps2){
    PhanSo kq;
    kq.tu = ps1.tu * ps2.mau + ps1.mau * ps2.tu;
    kq.mau = ps1.mau * ps2.mau;
    ToiGian(kq);
    return kq;  
}

//trừ phân số
PhanSo Tru(PhanSo ps1, PhanSo ps2){
    PhanSo kq;
    kq.tu = ps1.tu * ps2.mau - ps1.mau * ps2.tu;
    kq.mau = ps1.mau * ps2.mau;
    ToiGian(kq);
    return kq;  
}

//nhân phân số
PhanSo Nhan(PhanSo ps1, PhanSo ps2){
    PhanSo kq;
    kq.tu = ps1.tu * ps2.tu;
    kq.mau = ps1.mau * ps2.mau;
    ToiGian(kq);
    return kq;  
}

//chia phân số
PhanSo Chia(PhanSo ps1, PhanSo ps2){
    PhanSo kq;
    kq.tu = ps1.tu * ps2.mau;
    kq.mau = ps1.mau * ps2.tu   ;
    ToiGian(kq);
    return kq;
}

int main(){
    PhanSo ps1, ps2, kq, kq2;
    cout << "Moi nhap vap ps1: ";
    cin >> ps1.tu >> ps1.mau;
    cin.ignore();
    cout << "Moi nhap vap ps2: ";
    cin >> ps2.tu >> ps2.mau;
    cin.ignore();
    // cộng 
    kq = Cong(ps1, ps2);
    cout << "Tong hai phan so: " << kq.tu << "/" << kq.mau << endl;
    //trừ
    kq = Tru(ps1, ps2);
    cout << "Hieu hai phan so: " << kq.tu << "/" << kq.mau << endl;
}