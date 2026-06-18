#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin >> t;

    while(t--) {

        vector<L> a(7);
        
        for(L i = 0; i < 7; i++) {
            cin >> a[i];
        }

        L ans = LLONG_MIN;

        for(int i = 0; i < 7; i++) {
            L sum = 0;

            for(int j = 0; j < 7; j++) {
                if(i == j) sum += a[j];
                else sum -= a[j];
            }

            ans = max(ans, sum);
        }

        cout << ans << endl;
    }

    return 0;   
}