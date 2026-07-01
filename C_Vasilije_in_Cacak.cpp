#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    

        L n,k,x;
        cin>>n>>k>>x;

        L Minsum = k * (k + 1) / 2;
        L Maxsum = k * (2 * n - k + 1) / 2;

        if(x >= Minsum && x <= Maxsum) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}