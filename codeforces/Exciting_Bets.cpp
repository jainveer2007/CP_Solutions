#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    
        
        L a,b;
        cin>>a>>b;

        if(b > a) {
            swap(a, b);
        }
        if(a == b) {
            cout<<0<<" "<<0<<endl;
        }
        else {
            L gcd = a-b;
            L mini = min(b%gcd, gcd-b%gcd);

            cout<<gcd<<" "<<mini<<endl;
        }
    }

    return 0;
}