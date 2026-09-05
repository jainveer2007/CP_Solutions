#include<bits/stdc++.h> 
using namespace std; 
#define L long long  
 
int main() { 
         
    L n; 
    cin>>n; 
 
    L count = 0;
 
    while(n>0) { 
 
        L digit = n%10; 
 
        if(digit == 7 || digit == 4) { 
            count++; 
        } 
 
        n = n/10;
    } 
 
    if(count == 7 || count == 4) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
 
    return 0; 
}