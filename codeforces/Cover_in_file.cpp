#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;
        
        string s;
        cin >> s;

        int j = 0;

        for(int i = 0; i < n; i++) {
            if(s[i] == '.') {
                j++;
            }
        }

        bool D = false;

        for(int i = 0; i < n - 2; i++) {
            if(s[i] == '.' && s[i+1] == '.' && s[i+2] == '.') {
                D = true;
                break;
            }
        }

        if(D) {
            cout << 2 << endl;
        }
        else {
            cout << j << endl;
        }
    }

    return 0;
}

*****************************

#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;

    while(t--) {

        int n;
        cin>>n;
        
        string s;
        cin>>s;

        int c=0, j=0;

        for(int i=0; i<n; i++) {

            if(s[i]=='#') {
                c++;
            }
            else if(s[i]=='.') {
                j++;
            }
        }

            if(c==n) {
                cout<<0;
            }

            else if(j==n) {
                cout<<2;
            }

        int k=0;

        bool D = false;

        for(int i=0; i<n-2; i++) {

            if(s[i] == '.' && s[i+1] == '.' && s[i+2] == '.') {
                D = true;
                break;
            }
        }

        if(D) {
            cout<<2;
        }
        else {
            cout<<j;
        }

        return 0;

    }
}