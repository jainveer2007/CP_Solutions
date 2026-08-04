#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    
        
        L n;
        cin>>n;

        string a;
        cin>>a;

        string b;
        cin>>b;

        L aodd = 0, aeven = 0;
        L bodd = 0, beven = 0;

        for(L i=0; i<n; i++) {

            if(a[i] == '1') {

                if(i%2 == 0) {
                    aodd++;
                }
                else {
                    aeven++;
                }
            }

            if(b[i] == '1') {

                if(i%2 == 0) {
                    bodd++;
                }
                else {
                    beven++;
                }
            }
        }

        if(aodd == bodd && aeven == beven) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}