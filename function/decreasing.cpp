#include <iostream>

using namespace std;

void sortArray(int arr[1000], int n) {
	for( int i = n-1; i > 0; i--){
        for (int j = 0; j < n; j++){
            if(arr[j] < arr[j +1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
	int n;
	int arr[1000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sortArray(arr, n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}