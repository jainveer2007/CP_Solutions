#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {

        L x,y;
        cin>>x>>y;

        if(x%2 == 0 && y%2 == 0) {
            cout<<"YES"<<endl;
        }
        else if(x%2 != 0 && y%2 != 0) {
            cout<<"NO"<<endl;
        }
        else if((x%2 != 0 && y%2 == 0) || (x%2 == 0 && y%2 != 0)) {
            cout<<"YES"<<endl;
        }   
    }

    return 0;
}