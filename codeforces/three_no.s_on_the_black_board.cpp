#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    
        
        L a,b,c;
        cin>>a>>b>>c;

        L maxi = max(max(a,b), c);
        L mini = min(min(a,b), c);

        L diff = maxi - mini;

        L mid = a+b+c- maxi - mini;
        
        if(mid + mini <= maxi) {
            cout<<mid<<endl;
        }
        else if(mid + mini > maxi) {
            cout<<maxi-mini<<endl;
        }
    }

    return 0;
}