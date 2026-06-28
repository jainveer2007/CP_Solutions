#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L n,k;
    cin>>n>>k;

    vector<L> v(n);
    
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    L threshold = v[k-1];
    L count = 0;
    
    for(int i=0; i<n; i++) {
        if(v[i] >= threshold && v[i] > 0) {
            count++;
        }
    }

    cout<<count<<endl;

    return 0;   
}