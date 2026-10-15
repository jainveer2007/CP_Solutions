#include<bits/stdc++.h> 
using namespace std; 
#define L long long  
 
int main() { 
 
    L t; 
    cin>>t; 
 
    while(t--) {    
         
        L n; 
        cin>>n; 
 
        vector<L> v(n+1); 
 
        for(L i=1; i<=n; i++) { 
            cin>>v[i]; 
        } 
 
        vector<L> pos; 
 
        for(L i=1; i<=n; i++) { 
             
            if(v[i] != i) { 
                pos.push_back(i); 
            } 
        } 
 
        L flag = 1; 
 
        for(L i=0; i<pos.size(); i++) { 
             
            if(v[pos[i]] != pos[pos.size()-i-1]) { 
                flag = 0; 
                break; 
            } 
        } 
 
        if(flag == 1) { 
            cout<<"YES"<<endl; 
        } 
        else { 
            cout<<"NO"<<endl; 
        } 
    } 
 
    return 0; 
}