#include<bits/stdc++.h>
using namespace std;
#define L long long

int main() {

    L t;
    cin>>t;

    while(t--) {

        string s;
        cin>>s;

        L zero = 0;
        L one = 0;

        for(char ch : s) {

            if(ch == '0') {
                zero++;
            }
            else {
                one++;
            }
        }

        L moves = min(zero, one);

        if(moves % 2 != 0) {
            cout<<"DA"<<endl;
        }
        else {
            cout<<"NET"<<endl;
        }
    }

    return 0;
}