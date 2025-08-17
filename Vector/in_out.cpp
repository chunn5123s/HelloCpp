#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(40);
    v.push_back(50);
    cout << v.size() << endl;
    cout << "the first element in vector is " << v[0] << endl;
    cout << "the last element in vector is " << v[v.size() - 1] << " or " << v.back() << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    //or
    for(int a : v){
        cout << a << " ";
    }
    cout << endl;
    // or
    for(vector<int>::iterator it = v.begin(); it != v.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;
    // or
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
}