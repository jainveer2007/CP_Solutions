#include<bits/stdc++.h>
using namespace std;
#define L long long

int main() {

    L t;
    cin>>t;

    while(t--) {

        L x,y,z;
        cin>>x>>y>>z;

        if(y >= z) {
            cout<<string(x+y+z, 'R')<<endl;
        }
        else if(z >= x) {
            cout<<string(x+y+z, 'S')<<endl;
        }
        else {
            cout<<string(x+y+z, 'P')<<endl;
        }
    }
}   