#include <bits/stdc++.h>
using namespace std;

struct SV{
    int ma;
    char name[100];
};

int main(){
    //khai báo con trỏ thông thường
    int* CT = new int;
    //khởi tạo đối tượng thông thường
    SV sv1;
    //gán gt cho sv1
    sv1 = {480, "LHT"};
    //xuất tt 
    cout << "Ma SV1: " << sv1.ma << endl;
    cout << "Ten SV1: " << sv1.name << endl;

    //con trỏ cấu trúc
    SV* pSV2 = new SV;
    // gán gt
    *pSV2 = {6789, "BaGa"};
    //xuất tt
    cout << "Ma SV2: " << pSV2->ma << endl;
    cout << "Ten SV2: " << pSV2->name << endl;
    cout << endl;

    SV* pSV3 = new SV;
    pSV3 = &sv1;
    cout << "Ma SV3: " << pSV3->ma << endl;
    cout << "Ten SV3: " << pSV3->name << endl;
    *pSV3 = {1234, "Messi"};
    cout << pSV3->ma << "\t" << pSV3->name << endl;
    cout << sv1.ma << "\t" << sv1.name << endl;
    return 0;
}