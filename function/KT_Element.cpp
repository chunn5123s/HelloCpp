#include <iostream>

using namespace std;

void show(string arr[1000], int n) {
	for ( int i=0; i< n; i++){
        if ( arr[i].size() >= 3){
             cout << arr[i] << " ";
        }
    }
}

int main() {
	int s;
	string arr[1000];
	cin >> s;
	for (int i = 0; i < s; i++) {
		cin >> arr[i];
	}
	show(arr, s);
	return 0;
}