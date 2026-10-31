#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {

        L a,b;
        cin>>a>>b;

        if(a<=b) {
            cout<<-1<<endl;
        }
        else {
            cout<<min(b,a-b)<<endl;
        }
    }
}