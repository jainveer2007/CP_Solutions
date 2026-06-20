#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {

        L a,x,y;
        cin>>a>>x>>y;

        L aliceX = abs(a-x);
        L aliceY = abs(a-y);

        L bobx = abs(x-x);
        L boby = abs(x-y);

        L bobX = abs(y-x);
        L bobY = abs(y-y);

        if((bobx < aliceX && boby < aliceY) || (bobX < aliceX && bobY < aliceY)) {
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }

    return 0;   
}