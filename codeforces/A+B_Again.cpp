#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {

        L n;
        cin>>n;

        int a = (n/10)%10;
        int b = n%10;   

        int ans = a+b;
        cout<<ans<<endl;
    }

    return 0;
}