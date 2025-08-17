#include <bits/stdc++.h>
using namespace std;

// Tìm kiếm nhị phân không đệ quy
bool bs(int a[], int n, int x);

// Tìm kiếm nhị phân đệ quy
bool binary_search(int a[], int l, int r, int x);

//vị trí đầu tiên của một pt trong mảng đã sắp xếp
int first_pos(int a[], int n, int x);

//vị trí cuối cùngcùng của một pt trong mảng đã sắp xếp
int last_pos(int a[], int n, int x);

int main() {
    int n, x; 
    cin >> n >> x;
    int a[n];
    for(int &x : a){
        cin >> x;
    }
    cout << first_pos(a, n, x) << " " << last_pos(a, n, x) << endl;
    //tìm kiếm nhị phân bằng vector
    // vector<int> v(n);
    // for (int i = 0; i < n; i++) { 
    //     cin >> v[i];
    // }
    // int x; cin >> x;
    // if (binary_search(v.begin(), v.end(), x)) {
    //     cout << "Found!" << endl;
    // } else {
    //     cout << "Not Found!" << endl;
    // }
    return 0;
}

bool bs(int a[], int n, int x) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int m = (l + r) / 2; 
        if (a[m] == x) {
            return true;
        } else if (a[m] < x) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return false;
}
    
bool binary_search(int a[], int l, int r, int x){
    if (l > r) return false;
    int m = (l + r) / 2;
    if (a[m] == x) return true;
    else if (a[m] < x)
        return binary_search(a, m + 1, r, x);
    else
        return binary_search(a, l, m - 1, x);
}

int first_pos(int a[], int n, int x){
    int res = -1;
    int l = 0, r = n - 1;
    while(l <= r){
        int m = l + (r - l) / 2;
        if(a[m] == x){
            res = m;
            r = m - 1;
            //do mảng dc sắp xếp tăng dần
            //nên tìm thêm ở bên trái middle
        }
        else if(a[m] < x){
            l = m + 1;
        }
        else r = m - 1; 
    }
    return res;
}

int last_pos(int a[], int n, int x){
    int res = -1;
    int l = 0, r = n - 1;
    while(l <= r){
        int m = l + (r - l) / 2;
        if(a[m] == x){
            res = m;
            l = m + 1;
            //do mảng dc sắp xếp tăng dần
            //nên tìm thêm ở bên phải middle
        }
        else if(a[m] < x){
            l = m + 1;
        }
        else r = m - 1; 
    }
    return res;
}
