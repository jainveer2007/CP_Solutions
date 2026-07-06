#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    
        
        L x,n;
        cin>>x>>n;

        L ans;

        if(n%4 == 1) {
            ans =- n;
        }
        else if(n%4 == 2) {
            ans = 1;
        }
        else if(n%4 == 3) {
            ans = n+1;
        }
        else {
            ans = 0;
        }

        if(x%2==0) {
            ans = x + ans;
        }
        else {
            ans = x - ans;
        }

        cout<<ans<<endl;
    }

    return 0;
}