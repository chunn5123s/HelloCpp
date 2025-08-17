#include <bits/stdc++.h>
using namespace std;
 
int main(){
    const int dong = 3;
    const int cot = 4;
    int** capHai = new int*[dong]; //3 dòng
    for(int i = 0; i < dong; i++){
        //di chuyển pointer bên trong để cấp phát bộ nhớ
        *(capHai + i) = new int[cot]; // 4 pt
    }

    //xuất đại chỉ ô nhớ của con trỏ cấp 2
    for(int i = 0; i < dong; i++){
        for(int j = 0; j < cot; j++){
            //khi sd dấu ngoặc vuông
            //sẽ truy xuất giá trị đến ô nhớ tại vị trí i j
            //vì thế cần sd toán tử & để xuất địa chỉ ô nhớ tại i j
            cout << &capHai[i][j] << " ";
        }
           cout << endl;
    }

    //gán gt cho các pt trong mảng
    for(int i = 0; i < dong; i++){
        for(int j = 0; j < cot; j++){
            capHai[i][j] = i + j;
        }
    }

    //duyệt và xuất các gt
    for(int i = 0; i < dong; i++){
        for(int j = 0; j < cot; j++){
            cout << capHai[i][j] << " ";
        }
        cout << endl;
    }

    // hủy con trỏ
    for(int i = 0; i < dong; i++){
        delete* (capHai + i);
    }
    delete capHai;
}