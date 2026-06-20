#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {

        L x,y;
        cin>>x>>y;

        L diff = x + 1 - y;

        if(diff >= 0 && diff % 9 == 0) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}