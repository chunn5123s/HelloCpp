#include <bits/stdc++.h>
#include <random>
using namespace std;

void Nhap(int* &M, int n);
void Xuat(int* &M, int n);
void change(int* a, int* b);
void decreasing(int* &M, int n);

int main(){
    int* M;
    int n = 10;
    Nhap(M, n);
    cout << "Mang ngau nhien vua tao la:" << endl;
    Xuat(M, n);
    decreasing(M, n);
    cout << "Mang sau sap xep la: \n"; 
    Xuat(M, n);
    return 0;
}

void Nhap(int* &M, int n){
    M = new int[n];
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 100);
    for(int i = 0; i < n; i++){
        *(M + i) = dis(gen);
    }
}

void Xuat(int* &M, int n){
    for(int i = 0; i < n; i++){
        cout << *(M + i) << " ";
    }
    cout << endl;
}

void change(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void decreasing(int* &M, int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(*(M + i) < *(M + j)){
                change(M + i, M + j);
            }
        }
    }
}