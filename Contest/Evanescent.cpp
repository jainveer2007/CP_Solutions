#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {

        L n;
        cin>>n;

        string s;
        cin>>s;

        L ans = 0;

        for(L i=0; i<n; i++) {

            if(i == 0 || s[i] != s[i-1]) {
                ans++;
            }
        }

        L res = ans;

        for(L i=1; i<n-1; i++) {

            L change = 0;

            if(s[i-1] != s[i]) {
                change--;
            }

            if(s[i] != s[i+1]) {
                change--;
            }

            if(s[i-1] != s[i+1]) {
                change++;
            }

            res = min(res, ans + change);
        }

        cout<<res<<endl;
    }

    return 0;
}