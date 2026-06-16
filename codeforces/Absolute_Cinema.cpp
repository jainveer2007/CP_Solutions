#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {

        L n;
        cin>>n;

        vector<L> a(n);
        
        for(int i=0; i<n; i++) {
            cin>>a[i];
        }

        vector<L> b(n);

        for(int i=0; i<n; i++) {
            cin>>b[i];
        }

        for(int i=0; i<n; i++) {
            
            if(a[i] > b[i]) {
                swap(a[i], b[i]);
            }
        }

        sort(a.begin(), a.end());

        L maxA = a.back();
        L sum = 0;

        for(int i=0; i<n; i++){
            sum = b[i] + sum;
        }

        L ans =  maxA + sum;
        cout<<ans<<endl;
    }

    return 0;
}