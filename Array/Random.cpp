#include <bits/stdc++.h>
using namespace std;

int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 99); //khoảng random

    int a[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            a[i][j] = dis(gen);
        }
    }
    cout << "cac gt trong mang: " << endl;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}