#include<bits/stdc++.h> 
using namespace std; 
#define L long long  
 
int main() { 
 
    int n; 
    cin>>n; 
 
    int cnt = 0; 
 
    if(n%2 == 0) { 
 
        cnt = n/2; 
 
        cout<<cnt<<endl; 
 
        for(int i=0; i<cnt; i++) { 
            cout<<2<<" "; 
        } 
    } 
    else { 
 
        cnt = (n-3)/2 + 1; 
 
        cout<<cnt<<endl; 
 
        cout<<3<<" "; 
 
        for(int i=0; i<(n-3)/2; i++) { 
            cout<<2<<" "; 
        } 
    } 
}