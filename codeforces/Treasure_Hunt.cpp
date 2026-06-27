#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {

        L x,y,a;
        cin>>x>>y>>a;

        L rem = a%(x+y);

        if(rem < x) {
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}