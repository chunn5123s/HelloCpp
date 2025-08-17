#include <iostream>
using namespace std;

// Hàm hoán đổi giá trị của hai số nguyên
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm sắp xếp mảng bằng thuật toán sắp xếp nổi bọt (Bubble Sort) sử dụng con trỏ
void bubbleSort(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(arr + i) > *(arr + j )) {
                swap(arr + i, arr + j);
            }
        }
    }
}

int main() {
    int n;
    cout << "Nhập số phần tử của mảng: ";
    cin >> n;
    
    int arr[n]; // Không cấp phát bộ nhớ động
    
    cout << "Nhập các phần tử của mảng: ";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }
    
    bubbleSort(arr, n);
    
    cout << "Mảng sau khi sắp xếp tăng dần: ";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i);
    }
    cout << endl;
    
    return 0;
}
