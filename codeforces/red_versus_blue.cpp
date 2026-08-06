#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    
        
        L n,r,b;
        cin>>n>>r>>b;

        L x = r/(b+1);
        L y = r%(b+1);

        for(int i=0; i<=b; i++) {

            L cnt = x;

            if(y) {
                cnt++;
                y--;
            }

            while(cnt--) {
                cout<<"R";
            }

            if(i!=b) {
                cout<<"B";
            }
        }

        cout<<endl;
    }

    return 0;
}