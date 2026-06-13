#include<bits/stdc++.h>
using namespace std;
#define L long long

int main() {

    L t;
    cin >> t;

    while(t--) {

        L n;
        cin >> n;

        L arr[n];

        for(int i = 0; i < n; i++) {
            cin>>arr[i];
        }

        bool valid = true;

        for(int i = 0; i < n - 1; i++) {

            L g = __gcd(arr[i], arr[i + 1]);

            if(g < 2) {
                cout << "NO" << endl;
                valid = false;
                break;
            }
        }

        if(valid) {

            L totalGcd = arr[0];

            for(int i = 1; i < n; i++) {

                totalGcd = __gcd(totalGcd, arr[i]);
            }

            if(totalGcd > n) {
                cout<<"YES"<<endl;
            } 
            else {
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}