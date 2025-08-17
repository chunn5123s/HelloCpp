#include <bits/stdc++.h>
using namespace std;

//trộn 2 dãy con: 1[l, m], 2[m+1, r]
void merge(int a[], int l, int m, int r){
    vector<int> x(a+l, a+m+1);
    vector<int> y(a+m+1, a+r+1);
    int i = 0; int j = 0;
    while(i < x.size() && j < y.size()){// nếu pt mảng 1 nhỏ hơn pt mảng 2
        if(x[i] < y[j]){
            a[l] = x[i];
            ++l;
            ++i;
        } else{
            a[l] = y[j];
            ++l;
            ++j;
        }
    }
    while(i < x.size()){
        a[l] = x[i];
        ++l;
        ++i;
    }
    while(j < y.size()){
        a[l] = y[j];
        ++l;
        ++j;
    }
}

void mergeSort(int a[], int l, int r){
    if(l >= r) return;
    int m = (l + r) / 2;
    mergeSort(a, l, m);
    mergeSort(a, m+1, r);
    merge(a, l, m, r);
}

int main(){
    int a[100], n = 100;
    srand(time(NULL));//khởi tạo ngẫu nhiên bằng time
    for(int i = 0; i < n; i++){
        a[i] = rand() % 1000;//random từ 0 đến 999 
    }
    mergeSort(a, 0, n - 1);
    for(int x : a){
        cout << x << " ";
    }
    return 0;
}