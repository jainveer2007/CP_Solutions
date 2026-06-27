#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {

        L n;
        cin>>n;

        if(n%4 == 0) {
            cout<<n/4<<endl;
        }
        else {
            cout<<n/4 + 1<<endl;
        }
    }

    return 0;
}