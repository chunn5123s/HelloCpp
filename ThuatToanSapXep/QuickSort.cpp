#include <bits/stdc++.h>
using namespace std;
//lomuto
int partition(int a[], int l, int r);
// void quickSort(int a[], int l, int r);
//hoare
int partition2(int a[], int l, int r){
    int p = a[l];
    int i = l - 1;
    int j = r + 1;
    while(1){
        do i++;
        while(a[i] < p);
        do j--;
        while(a[j] > p);
        if(i < j){
            swap(a[i], a[j]);
        } 
        else return j;
    }
}

void quickSort(int a[], int l, int r){
    if(l >= r) return;
    int p = partition2(a, l, r);
    quickSort(a, l, p)  ;
    quickSort(a, p + 1, r);
}

int main(){
    int n; cin >> n;
    int a[1000];
    srand(time(NULL));
    for(int i = 0; i < n; i++){
        a[i] = rand() % 1000;
    }
    quickSort(a, 0, n - 1);
    for(int i = 0; i  < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}

int partition(int a[], int l, int r){
    int p = a[r];
    int i = l - 1;
    for(int j = l; j < r; j++){
        if(a[j] <= p){
            ++i;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[r]);
    return i;
}

// void quickSort(int a[], int l, int r){
//     if(l >= r) return;
//     int p = partition(a, l, r);
//     quickSort(a, l, p - 1);
//     quickSort(a, p + 1, r);
// }