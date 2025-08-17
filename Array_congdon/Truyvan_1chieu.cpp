    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        int n;
        cout << "Gioi han cua mang: "; 
        cin >> n;
        int a[n];
        for(int &x : a)
        cin >> x;
        int q;
        cout << "so lan muon truy van: ";
        cin >> q;

        while(q--){
            int  sum = 0;
            int l, r; cin >> l >> r;
            for(int i = l; i <= r; i++){
                sum += a[i];
            }
            cout << "kq: " << sum;
        }
        return 0;
    }