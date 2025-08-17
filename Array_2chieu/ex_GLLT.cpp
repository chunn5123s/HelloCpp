#include <bits/stdc++.h>
using namespace std;

int main(){
    // random
    int row = 4;
    int col = 6;
    int a[row][col];
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0,99);

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            a[i][j] = dis(gen);
        }
    }

    // xuất gt  
    cout << "Mang sau random la: " << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }  

    // max
    int max = a[0][0];
    cout << "max la: ";
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(a[i][j] >= max){
                max = a[i][j];
            }
        }
    }  
    cout << max << endl;

    // min
    int min = a[0][0];
    cout << "min la: ";
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(a[i][j] <= min){
                min = a[i][j];
            }
        }
    }  
    cout << min << endl;

    // sum
    int sum = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            sum += a[i][j];
        }
    }  
    cout << "tong la: " << sum << endl;

    //check
    int count = 0;
    int k; 
    cout << "nhap vao so muon check: ";
    cin >> k;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(k == a[i][j]){
                count++;
            }
        }
    }  
    if(count == 0){
        cout << "so ko ton tai trong mang!\n";
    } else cout << "co " << count << " so " << k << " trong mang!\n";
}