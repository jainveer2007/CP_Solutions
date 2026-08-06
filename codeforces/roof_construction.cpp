#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    
        
        L n;
        cin>>n;

        L k = 1;

        while(k*2 < n) {
            k *= 2;
        }

        for(int i=k-1; i>=0; i--) {
            cout<<i<<" ";
        }

        for(int i=k; i<n; i++) {
            cout<<i<<" ";
        }

        cout<<endl;
    }

    return 0;
}