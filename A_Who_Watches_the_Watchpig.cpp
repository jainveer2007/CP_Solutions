#include<bits/stdc++.h>
using namespace std;
#define L long long

int main() {

    L t;
    cin>>t;

    while(t--) {    
        
        L n,k;
        cin>>n>>k;
        
        string s;
        cin>>s;
        
        if(2*k>n) {
            cout<<-1<<endl;
            continue;
        }
        
        L ans=0;
        
        for(L i=0;i<k;i++) {
            if(s[i]!='R')
                ans++;
            
            if(s[n-i-1]!='L')
                ans++;
        }
        
        cout<<ans<<endl;
    }
}