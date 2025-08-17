#include <bits/stdc++.h>
using namespace std;

int main(){
    // random
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 99);
    int a[7];
    for(int i = 0; i < size(a); i++){
        a[i]=dis(gen);
    }
    cout << "cac gt trong mang: ";
    for(int pt: a){
        cout << pt << " ";
    }
    cout << endl;

    // đảo mảng
    reverse(a, a + size(a));
    cout << "dao sau khi dao: ";
    for(int i = 0; i < size(a); i++){
    cout << a[i] << " ";
    }
    cout << endl;

    // xếp mảng tăng dần
    for(int i = 0; i < size(a); i++){
        for(int j = i + 1; j < size(a); j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "mang sau khi tang la: ";
    for(int i = 0; i < size(a); i++){
        cout << a[i] << " ";
    }
    cout << endl;

    // tính tổng
    int sum = 0;
    for(int i = 0; i < size(a); i++){
        sum += a[i];
    }
    cout << "tong cua mang: " << sum << endl;

    // đếm số tồn tại trong mảng
    int cnt = 0;
    cout << "nhap so muon kt: ";
    int n; cin >> n;
    for(int i = 0; i < size(a); i++){
        if(n == a[i]){
            cnt++;
        } 
    }
    if(cnt == 0){
        cout << "so " << n << " khong co trong mang" << endl;
    } else
    cout << "trong mang ton tai " << cnt << " so " << n << endl;
    return 0;
}