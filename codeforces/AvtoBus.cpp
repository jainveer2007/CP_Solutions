#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    

        L n;
        cin>>n;

        if(n<4 || n%2 != 0) {
            cout<<-1<<endl;
            continue;
        }
        
        L mini = (n+5)/6;
        L maxi = n/4;

        cout<<mini<<" "<<maxi<<endl;
    }
    
    return 0;
}