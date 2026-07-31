#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {
        
        L n,d;
        cin>>n>>d;

        vector<L> v(n);

        for(int i=0; i<n; i++) {
            cin>>v[i];
        }

        sort(v.begin(), v.end());

        L count = 0;
        L left = 0;
        L right = n-1;

        while(left <= right) {

            L players = d / v[right] + 1;

            if(left + players - 1 <= right) {
                count++;
                left = left + players - 1;
                right--;
            }
            else {
                break;
            }
        }

        cout<<count<<endl;
}