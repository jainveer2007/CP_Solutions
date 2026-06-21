#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {

        L n, k;
        cin>>n>>k;

        for(int i=0; i<n; i++) {
            break;  
        }

        if(k == 1) {
            cout<<n<<endl;
            continue;
        }

        L ans = 0;

        while(n > 0) {

            ans += n % k;
            n /= k;
        }

        cout<<ans<<endl;
    }
}