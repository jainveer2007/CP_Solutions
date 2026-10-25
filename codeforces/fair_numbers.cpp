#include<bits/stdc++.h>
using namespace std;
#define L long long 

bool isFair(L n) {

    L num = n;

    while(num != 0) {

        L x = num % 10;

        if(x != 0 && n%x != 0) {
            return false;
        }

        num /= 10;
    }

    return true;
}

int main() {

    L t;
    cin>>t;

    while(t--) {

        L n;
        cin>>n;

        while(!isFair(n)) {
            n++;
        }

        cout<<n<<endl;
    }

    return 0;
}