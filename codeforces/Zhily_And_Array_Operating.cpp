#include <bits/stdc++.h>
using namespace std;
#define L long long

int main() {

    int t;
    cin>>t;

    while(t--) {

        int n;
        cin>>n;

        vector<L> a(n), dp(n);

        for(int i=0; i<n; i++) {
            cin>>a[i];
        }

        dp[n - 1] = a[n - 1];

        for(int i=n-2; i>=0; i--) {
            dp[i] = max(a[i], a[i] + dp[i + 1]);
        }

        int ans = 0;

        for(int i = 0; i < n; i++) {
            if(dp[i] > 0) ans++;
        }

        cout<<ans<<endl;
    }

    return 0;
}