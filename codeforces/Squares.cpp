#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {

        L a,b,c,d;
        cin>>a>>b>>c>>d;

        if(a == b && b == c && c == d) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }

    return 0;   
}