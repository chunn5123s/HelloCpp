#include <bits/stdc++.h>
using namespace std;

int main(){
    // tuple<int, int, int> t{1, 2, 3};
    // cout << get<2> (t) << endl;
    tuple<string, int, string> t = make_tuple("hello", 100, "em");
    cout << get<0> (t) << " " << get<2> (t);
    return 0;
}