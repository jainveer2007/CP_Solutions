#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    
        
        L n;
        cin>>n;

        L h1 = (n + 5) / 3;
        L rem = n - h1;
        L h2 = rem/2 + 1;
        L h3 = rem - h2;

        cout<<h2<<" "<<h1<<" "<<h3<<endl;
    }

    return 0;
}