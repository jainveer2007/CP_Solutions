#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {

        L n;
        cin>>n;

        L a = n+1;
        L b = n+2;

        if(n%3 == 0) {
            cout<<0<<endl;
        }
        else {
            if(a%3 == 0) {
                cout<<1<<endl;
            }
            else if(b%3 == 0) {
                cout<<2<<endl;
            }
        }
    }

    return 0;
}