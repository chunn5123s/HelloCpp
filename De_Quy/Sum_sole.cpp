#include <iostream>

using namespace std;

int sum(int n) {
    if (n == 1) return 1;
    if (n % 2 == 0) {
        return sum(n-1);
    } else {
        return n + sum(n-1);
    }
}

//vd nhập 4 là số chẳn thì return về sum(n-1)
//sau đó xét 3 là số lẻ thì cộng tiếp tục với sum(n-1)
//đến số 2 lại tiếp tục gọi sum(n-1)
// cuối cùng là 1 sẽ return về 1 và cộng lại 3 + 1 = 4
int main() {
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}