#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {

       L l,r,d,u;
       cin>>l>>r>>d>>u;

        if((abs(l) == abs(r)) && (abs(r) == abs(d)) && (abs(d) == abs(u))) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }

    return 0;   
}