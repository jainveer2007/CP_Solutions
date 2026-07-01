#include<bits/stdc++.h>
using namespace std;
#define L long long 

L dx[4] = {-1, 1, -1, 1};
L dy[4] = {-1, -1, 1, 1};

int main() {

    L t;
    cin>>t;

    while(t--) {    

        L a,b;
        cin>>a>>b;

        L xk, yk;
        cin>>xk>>yk;

        L xq, yq;
        cin>>xq>>yq;

        set<pair<int, int>> Khits,Qhits;

        for(int i=0; i<4; i++) {

            Khits.insert({xk + dx[i]*a, yk + dy[i]*b});
            Khits.insert({xk + dx[i]*b, yk + dy[i]*a}); 

            Qhits.insert({xq + dx[i]*a, yq + dy[i]*b});
			Qhits.insert({xq + dx[i]*b, yq + dy[i]*a});
        }

        L ans = 0;

        for(auto position : Khits) {

            if(Qhits.find(position) != Qhits.end()) {
                ans++;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}