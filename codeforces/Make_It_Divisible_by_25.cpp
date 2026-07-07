#include<bits/stdc++.h>
using namespace std;
#define L long long 

L min_oper(string n, string possible) {

    L oper = 0;
    L x = possible.size() - 1;

    for(L i=n.size() - 1; i>=0; i--) {

        if(n[i] == possible[x]) {

            x--;

            if(x<0) {
                break;
            }
        }
        else {
            oper++;
        }
    }

    if(x>=0) {
        oper = INT_MAX;
    }

    return oper;
}

int main() {

    L t;
    cin>>t;

    while(t--) {    
        
        string n;
        cin>>n;

        vector<string> s = {"00", "25", "50", "75"};

        L ans = INT_MAX;

        for(auto possible : s) {

            ans = min(ans, min_oper(n, possible));
        }

        cout<<ans<<endl;
    }
}