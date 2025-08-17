#include <iostream>
using namespace std;
 
int main(){
    char kt[5] = { 't', 'h', 't', 'd', 'e'}; // chừa kt cuối cho null
    cout << kt << "\n";

    char* M;
    M = new char[50];
    M[0] = 'l';
    M[1] = 'h';
    M[2] = 't';
    M[3] = '\0';// ko có con trỏ null xuát sẽ lỗi
    cout << M << endl;

    //khai báo hằng chuỗi
    char M2[] = "tuandz";
    cout << size(M2);
    return 0;
}