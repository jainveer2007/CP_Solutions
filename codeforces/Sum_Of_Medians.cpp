#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    
        
        L n,k;
        cin>>n>>k;

        vector<L> v(n*k);

        for(int i=0; i<n*k; i++) {
            cin>>v[i];
        }

        L need = n/2;
        L index = n*k;
        L sum = 0;

        for(int i=0; i<k; i++) {

            index = index - (need+1);

            sum = sum + v[index];
        }

        cout<<sum<<endl;
    }

    return 0;
}