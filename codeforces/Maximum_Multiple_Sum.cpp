#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {

        L n;
        cin>>n;

        if(n == 3) {
            cout<<3<<endl;
        }
        else if(n >=4 || n == 2) {
            cout<<2<<endl;
        }
    }

    return 0;
}