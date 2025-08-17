#include <bits/stdc++.h>

using namespace std;

struct Address {
    string Street;
    string District;
    string City;
};

struct NV {
    int Code;
    string name;
    int age;
    Address Company;
    Address Home;
};

int main() {
    NV nv1;
    NV nv2;
    nv1 = {1, "Messi", 19, {"Mai Thanh The", "N5", "HCM"}, {"MTT", "N5", "ST"}};
    cout << "Info nv1:" << endl;
    cout << "Ma nv: " << nv1.Code << endl;
    cout << "Ten nv: " << nv1.name << endl;
    cout << "Dia chi nha nv: " << nv1.Home.District << endl;
    cout << "Dia chi CT nv: " << nv1.Company.City << endl;

    //Pointer
    NV* nv3 = new NV;
    *nv3 = {3, "CR7", 10, {"Mai Thanh The", "N5", "HCM"}, {"MTT", "N5", "ST"}};
    cout << "Info nv3:" << endl;
    cout << "Ma nv: " << nv3->Code << endl;
    cout << "Ten nv: " << nv3->name << endl;
    cout << "Dia chi nha nv: " << nv3->Home.District << endl;
    cout << "Dia chi CT nv: " << nv3->Company.City << endl;
    return 0;
}