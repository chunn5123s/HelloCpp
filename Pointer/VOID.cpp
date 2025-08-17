#include <bits/stdc++.h>
using namespace std;
 
int main(){
    // khai báo thông thuường
    int nguyenA;
    float thucB;
    // khai báo con trỏ
    int* troNguyen;
    float* troThuc;
    // gán con trỏ
    troNguyen = &nguyenA;
    troThuc = &thucB;

    // khai báo void
    void* giCungduoc;
    // gán con trỏ
    giCungduoc = &thucB;
    // giCungduoc = &nguyenA;

    // gán gt con trỏ void
    *(float*)giCungduoc = 65.6;

    //xuất địa chỉ ô nhớ
    cout << &thucB << endl;
    cout << giCungduoc << endl;

    //xuất giá trị
    cout << thucB << endl;
    cout << *(float*)giCungduoc << endl;
}   