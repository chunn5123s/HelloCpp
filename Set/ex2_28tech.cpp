#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    set<string> s;
    cin.ignore();
    for(int i =0; i < n; i++){
        string a; cin >> a;
        s.insert(a);
    }
    cout << s.size() << endl;
    for(string x : s){
        cout << x << " ";
    }
}