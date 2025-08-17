#include <bits/stdc++.h>
using namespace std;

int main(){
    // nomral
    int nhietDo = 78;
    cout << "dia chi o nho: " << &nhietDo << endl;

    // pointer
    int* a;
    a = new int;
    cout << "dia chi o nho pointer: " << a << endl;

    // add pointer value
    *a = 35;
    cout << "gia tri o nho cua a: " << *a << endl;

    //khai báo con trỏ T
    int* T;
    //trỏ biến T vào ô nhớ của nhietDo
    T = &nhietDo;
    //in ra địa chỉ ô nhớ
    cout << "dia chi con tro T tro toi: " << T << endl;
    cout << "gia tri o nho cua T: " << *T << endl;
    //thay đổi giá trị T
    *T = 17;
    cout << "gia tri T sau thay doi: " << *T << endl;
    cout << "gia tri nhietDo: " << nhietDo << endl;
}