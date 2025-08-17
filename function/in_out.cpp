#include <iostream>
using namespace std;
void chao(int a, int b, char c){
    cout << a << " " << b << " " << c << " " << endl;
}

int main (){
    for (int i=1; i<=5; i++){
        chao(100, 200, 'T');
    }
}