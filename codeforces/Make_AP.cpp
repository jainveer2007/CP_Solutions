#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    
        
        L a,b,c;
        cin>>a>>b>>c;

        bool answer = false;

        L x = 2*b - c;
        L y = (a+c)/2;
        L z = 2*b - a;
        
        if(x/a > 0 && x%a == 0) {
            answer = true;
        }

        if(y/b > 0 && y%b == 0 && (c-a)%2 == 0) {
            answer = true;
        }

        if(z/c > 0 && z%c == 0) {
            answer = true;
        }

        if(answer == true) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}