#include<bits/stdc++.h> 
using namespace std; 
#define L long long  
 
int main() { 
 
    L t; 
    cin>>t; 
 
    while(t--) {     
         
        L n; 
        cin>>n; 
 
        L x = n+1; 
        bool prime = true; 
 
        L i = 2; 
 
        while(i*i <= x) { 
 
            if(x%i == 0) { 
                prime = false; 
                break; 
            } 
 
            i++; 
        } 
 
        if(prime) { 
            cout<<"YES"<<endl; 
        } 
        else { 
            cout<<"NO"<<endl; 
        } 
    } 
 
    return 0; 
 
}