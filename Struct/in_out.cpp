#include <bits/stdc++.h>
using namespace std;

struct DiaChi{
    //khai báo thuộc tính(biến thành viên)
    char SoNha[25];
    char TenDuong[250];
    char TinhThanh[50];
};

struct SinhVien{
    char MaSV[10];
    char TenSV[50];
    bool Sex;
    DiaChi DiaChiNha;
    DiaChi DiaChiTruong;
}sv1, sv2;

int main(){
    //tạo biến cấu trúc
    SinhVien sv3;
    SinhVien sv4;
    //gán gt cho sv1 theo c1
    sv1 = {{"24739681"}, {"LHT"}, {true}, {{"224"}, {"3/2"}, {"Soc Trang"}}};
    //gán gt cho sv1 theo c2
    strcpy_s(sv2.MaSV, sizeof(sv2.MaSV), "24739681");
    strcpy_s(sv2.TenSV, sizeof(sv2.TenSV), "LHT");
    sv2.Sex = false;

    //truy cập đến các biến thành viên
    cout << "TT SV1 is: " << endl;
    cout << "Ma SV: " << sv1.MaSV << endl;
    cout << "Ten SV: " << sv1.TenSV << endl;
    cout << "Sex: " << (sv1.Sex == true ? "Nam" : "Nu") << endl;
    cout << "So nha SV1: " << sv1.DiaChiNha.SoNha << endl;
    cout << "Ten duong SV1: " << sv1.DiaChiNha.TenDuong << endl;
    cout << "Tinh thanh SV1: " << sv1.DiaChiNha.TinhThanh << endl;
    //sv2
    cout << "Profile SV2 is: " << endl;
    cout << "Code: " << sv2.MaSV << endl;
    cout << "Name: " << sv2.TenSV << endl;
    cout << "Sex: " << (sv2.Sex == true ? "Nam" : "Nu") << endl;

}