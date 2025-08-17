#include <bits/stdc++.h>
using namespace std;

void selectionSort(int a[], int n);

void insertionSort(int a[], int n);

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x; 
    selectionSort(a, n);
    for(int &x : a) cout << x << " ";
    cout << endl;
    insertionSort(a, n);
    for(int &x : a) cout << x << " ";

    //sắp xếp phân phối
    int cnt[10001], n;
    cin >> n;
    int m = INT_MIN;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        cnt[a[i]]++;
        //vd a[i]=1 thì a[1] đếm dc 1 lần
        m = max(m, a[i]);//pt lớn nhất trong mảng
    }
    for(int i = 0; i < m; i++){
        if(cnt[i] != 0){
            for(int j = 0; j , cnt[i]; j++){//duyệt qua từng cnt
                cout << i << " ";
            }
        }
    }
    return 0;
}

void selectionSort(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        int min = i;//cho vị trí index đầu là min và duyêt full mảng
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[min]){
                min = j;
            }
        }
        swap(a[i], a[min]);//hoán đổi vị trí
    }
}

void insertionSort(int a[], int n){
    for(int i = 1; i < n; i++){
        int x = a[i], pos = i - 1;
        while( pos >= 0 && x < a[pos]){
            a[pos + 1] = a[pos];    
            --pos;  
        }
        a[pos + 1] = x;
    }
}
