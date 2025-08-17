#include <bits/stdc++.h>
using namespace std;
int main(){
    const int row = 5;
    const int col = 3;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 99);

    int a[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            a[i][j] = dis(gen);
        }
    }

    cout << "mang ngau nhien la: " << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}