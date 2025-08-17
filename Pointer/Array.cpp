#include <iostream>
using namespace std;
int main() {
    int mang[] = {4, 6, 7, 9, 1, 0, 4, 6, 3, 8 };

    int* controM;
    controM = mang; // sau khi gán trỏ đến vị trí đầu tiên
    // duyệt mảng qua con trỏ
    for(int i = 0; i < size(mang); i++){
        //lấy giá trị nằm trên ô nhớ mà contro thứ i quản lý
        cout << mang[i] << " ";
    }
    cout << endl;
    // hoặc
     for(controM = mang; controM < mang + 10; controM++){
        cout << *(controM) << " ";
    }
    

    // thay đổi giá trị của mảng dùng con trỏ
    *(controM + 2) = 99;    
    *(controM + 5) = 111;
    cout << "\nMang sau doi la: \n";
    for(int i = 0; i < size(mang); i++){
        cout << (controM + i) << " ";
    }
    cout << endl;
    // hoặc
    cout << "\nMang sau doi la: \n";
    for(int i = 0; i < size(mang); i++){
        cout << mang[i] << " ";
    }
}