#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {

        L n,k;
        cin>>n>>k;

        L even = k-1;
        L odd = k;

        L count = 0;

        if(n%2 == 0) {
            count = (n + even - 1)/even;
        }
        else {
            count = 1;
            n = n-odd;
            count += (n + even - 1)/even;
        }       

        cout<<count<<endl;
    }

    return 0;   
}