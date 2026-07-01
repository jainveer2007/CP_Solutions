#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    

        L a,b,n;
        cin>>a>>b>>n;

        vector<L> v(n);

        for(int i=0; i<n; i++) {

            cin>>v[i];
        }

        L sum = b;

        for(int i=0; i<n; i++) {
            sum = sum + min(v[i], a-1);
        }

        cout<<sum<<endl;
    }

    return 0;
}