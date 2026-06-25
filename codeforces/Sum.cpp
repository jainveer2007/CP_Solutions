#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {

        L a,b,c;
        cin>>a>>b>>c;

        if((a+b == c) || (a+c == b) || (b+c == a)) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}