#include<bits/stdc++.h>
using namespace std;
#define L long long

int main() {

    L t;
    cin>>t;

    while(t--)  {

        L n;
        cin>>n;

        string s;
        cin>>s;

        while(s.front() != s.back() && !s.empty()) {
            s.pop_back();
            s.erase(0,1);
        }

        cout<<s.size()<<endl;
    }

    return 0;
}