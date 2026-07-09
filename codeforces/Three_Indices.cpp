#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    
        
        L n;
        cin>>n;

        vector<L> v(n);

        for(int i=0; i<n; i++) {
            cin>>v[i];
        }

        bool found = false;

        for(int i=1; i<n-1; i++) {

            if(v[i-1] < v[i] && v[i] > v[i+1]) {

                cout<<"YES"<<endl;
                cout<<i<<" "<<i+1<<" "<<i+2<<endl;

                found = true;
                break;
            }
        }

        if(!found) {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}