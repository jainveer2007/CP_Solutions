#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {   
        
        L n,m;
        cin>>n>>m;

        L sum = 0;
        L mn = LLONG_MAX;
        L neg = 0;

        for(L i=0; i<n*m; i++) {
            
            L x;
            cin>>x;

            if(x < 0) {
                neg++;
            }

            sum += abs(x);
            mn = min(mn, abs(x));
        }

        if(neg%2 == 0) {
            cout<<sum<<endl;
        }
        else {
            cout<<sum-2*mn<<endl;
        }
    }

    return 0;
}