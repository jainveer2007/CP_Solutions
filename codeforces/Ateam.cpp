
#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int p,v,t;
    int count=0;

    for(int i=0; i<n; i++) {
        cin>>p>>v>>t;

        if(p+v+t>=2) {
            count++;
        }
    }

    for(int i=0; i<3; i++) {
        int sf = 1;
        sf++;
    }

    cout<<count<<endl;

}