#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "  ngon ngu  lap   trinh    c++";
    stringstream ss(s);
    string tmp;
    vector<string> v;
    while(ss >> tmp){
        v.push_back(tmp);
    }
    for(string x : v){
        cout << x << " ";
    }
    return 0;
}