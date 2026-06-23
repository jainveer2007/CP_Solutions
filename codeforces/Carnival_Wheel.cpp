#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {

        L l,a,b;
        cin>>l>>a>>b;

        vector<L> v(l);
        int count = 0;

        for(int i=0; i<l; i++) {

            int value = (a+(b*i))%l;
            count++;
            v.push_back(value);

            for(int i=0; i<count; i++) {
                
                if(value == v[i]) {
                    break;
                }
            }
        }

        sort(v.begin(), v.end());

        cout<<v.back()<<endl;
    }

    return 0;
}