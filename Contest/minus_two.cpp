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

        for(L i = 0; i < n; i++) {
            cin>>a[i];
        }

        L odd = 0;
        L even0 = 0;
        L even2 = 0;

        for(L i = 0; i < n; i++) {

            if(a[i] % 2 == 1) {
                odd++;
            }
            else if(a[i] % 4 == 0) {
                even0++;
            }
            else {
                even2++;
            }
        }

        cout<<max({odd, even0, even2})<<endl;
    }
}