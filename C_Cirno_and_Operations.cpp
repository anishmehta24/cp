#include <bits/stdc++.h>
#define ll long long int
const int MOD = 1e9+7;
using namespace std;


int main() {
        int t;
        cin >> t;
        while(t--) {
           int n;cin >> n;
           vector<ll> a(n);
           for(auto &i:a) cin >> i;
           int temp=n;
           ll maxS = accumulate(a.begin(),a.end(),0LL);
           while(temp!=1) {
                for(int i=0;i<temp-1;i++) {
                    a[i] = a[i+1] - a[i];
                }
                temp--;
                ll s=0;
                for(int i=0;i<temp;i++) s+=a[i];
                maxS = max({maxS,s,-s});
           }
           cout << maxS << endl;

        }
}
