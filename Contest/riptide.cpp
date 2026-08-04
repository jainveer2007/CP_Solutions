#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    
        
        L a,b,c;
        cin>>a>>b>>c;

        L cnt=0;

        while(true) {

            if((a==b)||(b==c)||(c==a)) {
                break;
            }

            if(a>b) {
                swap(a,b);
            }

            if(b>c) {
                swap(b,c);
            }

            if(a>b) {
                swap(a,b);
            }

            c--;
            a++;

            cnt++;
        }

        cout<<cnt<<endl;
    }
}