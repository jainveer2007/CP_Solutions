#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {

        L n;
        cin>>n;

        L k;
        cin>>k;

       if(n%2 == 0) {
        cout<<"YES"<<endl;
       }
       else if(n%2 != 0 && k%2 != 0) {
        cout<<"YES"<<endl;
       }
       else if(k%2 ==0 && n%2 != 0) {
        cout<<"NO"<<endl;
       }
    }

    return 0;   
}