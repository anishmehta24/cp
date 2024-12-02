#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <string>
#include <numeric>
#include <algorithm>
#include <queue>
const int MOD = 1e9+7;
#define ll long long int
using namespace std;

ll countConsecutive(string s, ll n,ll m,ll k) {
    ll c=0;
    ll  r=0;
    ll ans=0;
    while(r<n){
        if(s[r]=='0'){
            c++;
        }
        else c=0;
        if(c==m){
            ans++;
            c=0;
            r=r+k-1;
        }
         r++;
    }
    // cout << c << endl;
    return ans;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n,m,k;
        cin >> n >> m >> k;
        string s;
        cin >> s;
        ll c0=0,c1=0;
        for(int i=0;i<n;i++) {
            if(s[i]=='0') c0++;
            else c1++;
        }
        // cout << c0;
        ll c = countConsecutive(s,n,m,k);
        // cout << c;
        // if(m==1){
        //     cout << c0/k << endl;
        // }
        
        // else{
        //     cout << c<< endl;
        // }
        cout << c << endl;
    }
}