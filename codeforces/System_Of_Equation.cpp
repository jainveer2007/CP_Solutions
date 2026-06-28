#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L n, m;
    cin>>n>>m;

    L count = 0;

    for(int a=0; a<=1000; a++) {

        for(int b=0; b<=1000; b++) {

            if((a*a + b == n) && (a + b*b == m)) {
                count++;
            }
        }
    }

    cout<<count;

    return 0;
}