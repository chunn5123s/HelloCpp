#include <bits/stdc++.h>
using namespace std;

int main(){
    //a > b 1
    // a < b -1
    // a == b 0
    char M[100] = "Hello myfriends"; 
    char S[100] = "Hello myfriendss";
    cout << strcmp(M, S) << endl; 

    //compare kt
    char M2[100] = "Hellso myfriends"; 
    char S2[100] = "Hello myfriendss";
    cout << strncmp(M2, S2, 4);
    return 0;
}