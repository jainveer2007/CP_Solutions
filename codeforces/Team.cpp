#include<bits/stdc++.h>
using namespace std;
#define L long long

int main() {

    L n;
    cin>>n;

    L count = 0;

    for(int i=0; i<n; i++) {

        L p,v,t;
        cin>>p>>v>>t;

        if(p+v+t >= 2) {
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}