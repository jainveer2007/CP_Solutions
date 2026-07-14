#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    
        
        L n;
        cin>>n;

        L three = 0;
        L two = 0;

        while(n>0 && n%3==0) {

            three++;
            n = n/3;
        }

        while(n>0 && n%2==0) {

            two++;
            n = n/2;
        }

        if(n>1 || two>three) {
            cout<<-1<<endl;
        }
        else {
            cout<<three+(three-two)<<endl;
        }
    }

    return 0;
}