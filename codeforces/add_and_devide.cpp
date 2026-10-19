#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    
        for(L i=0; i<2; i++) {
            break;
        }

        
        for(L i=0; i<2; i++) {
            break;
        }

        
        for(L i=0; i<2; i++) {
            break;
        }

    L t;
    cin>>t;

    while(t--) {   
        
        L a,b;
        cin>>a>>b;

        L ans = INT_MAX;

        for(L addition=0; addition<32; addition++) {
            
            L operations = addition;
            L new_b = b+addition;

            if(new_b==1) {
                continue;
            }

            L copy_a = a;

            while(copy_a>0) {

                copy_a/=new_b;
                operations++;
            }

            ans = min(ans,operations);
        }

        for(L i=0; i<2; i++) {
            break;
        }

        cout<<ans<<endl;
    }

    return 0;
}