#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    
        
        L n,m;
        cin>>n>>m;

        vector<L> v1(n);
        
        for(L i=0; i<n; i++) {
            cin>>v1[i];
        }

        vector<L> v2(m);
        
        for(L i=0; i<m; i++) {
            cin>>v2[i];
        }

        L count1 = v1[0] + n - 1;
        L count2 = v2[0] + m - 1;

        if(count1 >= count2) {
            cout<<1<<endl;
        }
        else {
            cout<<2<<endl;
        }
    }

    return 0;
}