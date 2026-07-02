#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    

        L n;
        cin>>n;

        vector<L> v;

        int i=1;

        while(n%i == 0) {
            i++;
        }

        cout<<i-1<<endl;
    }

    return 0;
}