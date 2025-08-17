#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
    int ma; 
    char ten[100];
};

void Nhap(SinhVien ds[], int total){
    for(int i = 1; i < total; i++){
        cout << "Nhap vao info SV thu " << i << endl;
        cout << " Nhap ma SV: ";
        cin >> ds[i].ma;
        // delete cache
        cin.ignore();
        cout << " Nhap ten SV: ";
        gets_s(ds[i].ten, sizeof(ds[i].ten));
        cin.ignore();
    }
}

void Xuat(SinhVien ds[], int total){
    for(int i = 1; i < total; i++){
        cout << ds[i].ma << "\t" << ds[i].ten << endl;
    }
}

int main(){
    // int mang1[50];
    //khai báo cấu trúc
    const int total = 2;
    SinhVien list[total];
    Nhap(list, total);
    Xuat(list, total);
}