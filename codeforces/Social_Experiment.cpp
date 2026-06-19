
#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {

        L n;
        cin>>n;

        if(n <= 3) {
            cout<<n<<endl;
        }
        else if(n%2 == 0) {
            cout<<0<<endl;
        }
        else if(n%2 != 0) {
            cout<<1<<endl;
        }
    }

    return 0;   
}