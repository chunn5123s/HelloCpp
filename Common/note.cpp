#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

//min / min_element(trong mảng, vector)
//max / max_element(trong mảng, vector)
//accumulate = tính tổng pt
//swap = hoán đổi vị trí
//Sort = sắp xếp tăng dần/ thêm greater<int>() = giảm dần
//Stable_sort = sắp xếp tăng dần giữ đúng vị trị, trị tuyét đối
//find = tìm kiếm trong mảng chưa có thứ tự
//binary_search
//lower_bound
//upper_bound
//fill

bool cmp(int a, int b);

int main(){
    int x = 100, y = 200;
    int a[10] = { -1, 2, 3, 5, 7, 1, 9, -1, 1};
    vector<int> b = { 2, 4, 7, 3, 9};
    vector<int> c = { 3, 5, 8, 1, 6};
    vector<int> d = { 2, 7, 9, 4, 5};

    cout << min(10, 20) << endl;
    cout << max(10, 20) << endl;
    //min / min_element(trong mảng, vector)
    cout << *min_element(a, a + 10) << endl;
    //max / max_element(trong mảng, vector)
    cout << *max_element(b.begin(), b.end()) << endl;
    //accumulate tính tổng pt
    int sum = accumulate(a, a + 10, 0);
    cout << sum << endl;
    cout << accumulate(b.begin(), b.end(), 0) << endl;
    //swap = hoán đổi vị trí
    swap(x, y);
    cout << x << ", " << y << endl;
    //Sort = sắp xếp tăng dần
    sort(a, a + 10);
    for(int x : a){
        cout << x << " ";
    } cout << endl;
    //Stable_sort = sắp xếp tăng dần giữ đúng vị trị, trị tuyét đối
    stable_sort(a, a + 10, cmp);
    for(int x : a){
        cout << x << " ";
    } cout << endl;
    //find = tìm kiếm trong mảng chưa có thứ tự
    auto it = find(a, a + 10, 2);
    if(it == a + 10){ //trỏ đến pt sau pt cuối vẫn 
        cout << "FOUND\n";
    } else cout << "Not Found\n";
    //binary_search
    stable_sort(a, a + 10, cmp);
    if(binary_search(a, a + 10, 3)){
        cout << "Found\n";
    } else cout << "Not Found\n";
    //lower_bound
    stable_sort(a, a + 10, cmp);
    auto it1 = lower_bound(a, a + 10, 2);
    cout << *it << endl;//giá trị
    cout << (it - a) << endl;//vị trí index
    //memset = thay đổi tất cả pt trong mảng thành gt mong muốn
    memset(a, 0, sizeof(a));
    for(int x : a){
        cout << x << " ";
    }
    cout << endl;
    //fill = giống memset nhưng dùng dc cho vector, map
    fill(b.begin(), b.end(), 1000);// thay all = 1000
    for(int x : b) 
    cout << x << " ";
    cout << endl;
    //merge = trộn 2 dãy sắp xếp tăng dần
    stable_sort(d.begin(), d.end(), cmp);
    stable_sort(c.begin(), c.end(), cmp);
    vector<int> res(10);
    merge(d.begin(), d.end(), c.begin(), c.end(), res.begin());
    for(int x : res)
    cout << x << " ";
    cout << endl;
    //reverse = đảo ngược mảng, vector
    reverse(c.begin(), c.end());
    for(int x : c)
    cout << x << ' ';
    cout << endl;
    //set_union = hợp tất cả mảng
    int mid[] = { 2, 4 , 7, 3};
    int mid2[] = { 9, 6 , 8, 1};
    vector<int> u(10);
    auto ut = set_union(mid, mid + 5, mid2, mid2 + 5, u.begin());
    u.resize(ut - u.begin());
    for(int x : u)
    cout << x << " ";
    cout << endl;
    //set_intersection = giao của 2 mảng( vừa thuộc mảng 1 vừa thuộc mảng b)
    auto ut2 = set_intersection(mid, mid + 5, mid2, mid2 + 5, u.begin());
    u.resize(ut - u.begin());
    for(int x : u)
    cout << x << " ";
    cout << endl;
    //set_difference = lấy ra pt thuộc mảng a nhưng ko thuộc mảng b
    auto ut = set_difference(mid, mid + 5, mid2, mid2 + 5, u.begin());
    u.resize(ut - u.begin());
    for(int x : u)
    cout << x << " ";
    cout << endl;
    //set_symmetric_difference = những pt ko thuộc(chung) cả 2 mảng
    auto ut = set_symmetric_difference(mid, mid + 5, mid2, mid2 + 5, u.begin());
    u.resize(ut - u.begin());
    for(int x : u)
    cout << x << " ";
    cout << endl;
}

bool cmp(int a, int b){
    return abs(a) < abs(b);
}