#include <bits/stdc++.h>
using namespace std;
// xuất gt từ lớn đến bé
int main(){
    unordered_set<int> s;
    for(int i = 0; i < 10; i++){
        s.insert(i);
    }
    for(int x : s){
        cout << x << endl;
    }
}
