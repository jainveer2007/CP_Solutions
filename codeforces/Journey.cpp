#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {

        L n,a,b,c;
        cin>>n>>a>>b>>c;

        L cycle = a + b + c;

        L full = (n - 1) / cycle;

        L sum = full * cycle;
        L count = full * 3;

        if(sum < n) {
            sum = sum + a;
            count++;
        }

        if(sum < n) {
            sum = sum + b;
            count++;
        }

        if(sum < n) {
            sum = sum + c;
            count++;
        }

        cout<<count<<endl;
    }

    return 0;
}