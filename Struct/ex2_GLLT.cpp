#include <bits/stdc++.h>
#include <math.h>
using namespace std;

struct ToaDo{
    double x;
    double y;
};

double KhoangCach(ToaDo a, ToaDo b){
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

void Nhap(ToaDo ds[], int sodiem){
    for(int i = 0; i < sodiem; i++){
        cout << "Nhap diem thu: " << i + 1 << endl;
        cout << "Nhap toa do x: ";
        cin >> ds[i].x;
        cin.ignore();
        cout << "Nhap toa do y: ";
        cin >> ds[i].y;
        cin.ignore();
    }
}

void Xuat(ToaDo ds[], int sodiem){
    for(int i = 0; i < sodiem; i++){
        cout << ds[i].x << "-" << ds[i].y << endl;
    }
}

double KhoangCachS(ToaDo ds[], int sodiem){
    double sum = 0.0;
    for(int i = 0; i < sodiem - 1; i++){
        double KC = KhoangCach(ds[i], ds[i + 1]);
        sum += KC;
        cout << "Kq thu " << i + 1 << " la: " << KC << endl;
    }
    return sum;
}

int main(){
    ToaDo a;
    ToaDo b;
    a = {6, 7};
    b = {8, 9};
    cout << "Khoang cach 2 diem a b la: " << KhoangCach(a, b) << endl;
    //mảng
    int sodiem;
    cout << "Nhap vao so diem: ";
    cin >> sodiem;
    ToaDo list[sodiem];
    Nhap(list, sodiem);
    cout << "Ds toa do vua nhap: " << endl;
    Xuat(list, sodiem);
    
    cout << "Tong do dai cac diem la: \n" << KhoangCachS(list, sodiem);
    return 0;
}