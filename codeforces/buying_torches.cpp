#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {

        L x,y,k;
        cin>>x>>y>>k;

        L sticks = k*y + k-1;
        L coal = (sticks + x - 2)/(x - 1);

        coal = coal + k;

        cout<<coal<<endl;
    }

    return 0;
}