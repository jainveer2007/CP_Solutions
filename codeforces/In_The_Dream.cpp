#include<bits/stdc++.h>
using namespace std;
#define L long long

bool possible(L x, L y) {

    L mx = max(x,y);
    L mn = min(x,y);

    return mx <= 2*(mn+1);
}

int main() {

    L t;
    cin>>t;

    while(t--) {

        L a,b,c,d;
        cin>>a>>b>>c>>d;

        L x = c-a;
        L y = d-b;

        if(possible(a,b) && possible(x,y)) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}