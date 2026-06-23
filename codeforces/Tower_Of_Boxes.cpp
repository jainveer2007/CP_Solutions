#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {

        L n, m, d;
        cin>>n>>m>>d;

        if((n-1)*m <= d) {
            cout<<1<<endl;
        }
        else {

            L boxes = d/m + 1;
            L ans = (n + boxes - 1)/boxes;
            cout<<ans<<endl;
        }
    }

    return 0;
}