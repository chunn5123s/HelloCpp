#include <bits/stdc++.h>
using namespace std;

int main(){
    char* thutu, ktX;
    char str7[100] = "HelloBaby";
    ktX = 'o';

    //tìm kt 'o' trong chuỗi str7
    thutu = strchr(str7, ktX);
    if(thutu == NULL)
    cout << "ko tim thay";
    else
    cout << "Tim thay tai vi tri index " << thutu-str7 << endl;

    //tìm chuỗi tuhoc trong chuỗi str8
    char* thutu2 = new char[100];
    char str8[100] = "toi rat muon duoc tuhoc tai tu hoc .cc";
    thutu2 = strstr(str8, "tuhoc");
    if(thutu2 == NULL)
    cout << "ko tim thay";
    else
    cout << "Tim thay tai vi tri index " << thutu2 - str8;
    return 0;
}