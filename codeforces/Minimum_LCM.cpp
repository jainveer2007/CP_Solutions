#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    
        
        L n;
        cin>>n;

        L first = 1;
        L second = n-1;

        for(L fac=2; fac*fac<=n; fac++) {

            if(n % fac == 0) {

                first = n / fac;
                second = n - first;
                break;
            }
        }

        cout<<first<<" "<<second<<endl;
    }
}