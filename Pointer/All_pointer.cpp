#include <iostream>
using namespace std;

int main() {
    int* mangCT[4]; // mảng có 4 pt và đều là con trỏ
    for(int i = 0; i < size(mangCT); i++){
        mangCT[i] = new int; // cấp phát bộ nhớ cho từng pt trong mảng
    }
    for(int i = 0; i < size(mangCT); i++){
        cout << mangCT[i] << " ";
    }
}