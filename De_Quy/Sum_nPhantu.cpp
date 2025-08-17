#include <iostream>

using namespace std;

int sumOfArray(int a[1000], int n) {
    if (n == 1) return a[0]; //nếu trong mảng chỉ có 1 phần tử thì trả về pt đầu tiên
    return a[n-1] + sumOfArray(a, n-1);
    /*
    vd n=6
    sẽ cộng từ phần tử thứ 6 trở về đến khi chỉ còn
    1 phần tử(đk dừng)
    */
}

int main() {
    int n;
    int arr[1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << sumOfArray(arr, n);
    return 0;
}