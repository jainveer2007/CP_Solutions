#include<bits/stdc++.h> 
using namespace std; 
#define L long long  
 
int main() { 
 
    L t; 
    cin>>t; 
 
    while(t--) {    
         
        L n;
        cin >> n;

        vector<L> a(n);
        vector<L> one;

        for(L i = 0; i < n; i++) {
            cin >> a[i];

            if(a[i] == 1)
                one.push_back(i);
        }

        L left = -1, right = -1;
        L best = 0;

        for(L i = 1; i < one.size(); i++) {
            L l = one[i-1];
            L r = one[i];

            if(r - l + 1 > best) {
                best = r - l + 1;
                left = l;
                right = r;
            }
        }

        if(!one.empty()) {

            L first = one.front();

            for(L i = 0; i < first; i++) {
                if(a[i] == -1) {
                    if(first - i + 1 > best) {
                        best = first - i + 1;
                        left = i;
                        right = first;
                    }
                    break;
                }
            }

            L last = one.back();

            for(L i = n - 1; i > last; i--) {
                if(a[i] == -1) {
                    if(i - last + 1 > best) {
                        best = i - last + 1;
                        left = last;
                        right = i;
                    }
                    break;
                }
            }
        }
        else {

            L first = -1;
            L last = -1;

            for(L i = 0; i < n; i++) {
                if(a[i] == -1) {
                    first = i;
                    break;
                }
            }

            for(L i = n - 1; i >= 0; i--) {
                if(a[i] == -1) {
                    last = i;
                    break;
                }
            }

            if(first != -1 && last != -1 && first != last) {
                left = first;
                right = last;
            }
        }

        for(L i = 0; i < n; i++) {
            if(a[i] == -1)
                a[i] = 0;
        }

        if(left != -1) {
            a[left] = 1;
            a[right] = 1;
        }

        for(L i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << '\n';
    }
}   