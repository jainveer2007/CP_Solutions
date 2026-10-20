#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    vector<L> primes;

    for(L i=2; i<=100000; i++) {

        bool is_prime = true;

        for(L j=2; j*j<=i; j++) {

            if(i%j == 0) {
                is_prime = false;
                break;
            }
        }

        if(is_prime) {
            primes.push_back(i);
        }
    }

    L t;
    cin>>t;

    while(t--) {   

        L d;
        cin>>d;

        L p = -1;

        for(L i=0; i<primes.size(); i++) {

            if(primes[i]>=1+d) {
                p = primes[i];
                break;
            }
        }

        L q = -1;

        for(L i=0; i<primes.size(); i++) {
                
            if(primes[i] >= p+d) {
                q = primes[i];
                break;
            }
        }

        L a = min(p*p*p, p*q);

        cout<<a<<endl;
    }
}