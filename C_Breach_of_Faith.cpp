#include <bits/stdc++.h>
#define ll long long int
const ll MOD = 1e9 + 7;
using namespace std;


void solve() {
   ll n;cin >> n ;
    vector<ll> a(2*n);
    for(auto &it:a) cin >> it;

    sort(a.begin(),a.end());
    ll sum1=0,sum2=0;
    for(int i=0;i<n;i++) {
        sum1+=a[i]; 
        sum2+=a[i+n];
    }

    ll maxi = sum2 + sum1;
    ll x = sum2-sum1;

    bool flag = false;
    for(int i=0;i<2*n;i++) {
        if(a[i] == x) {
            flag = true;
            break;
        }
        if(a[i]>x) break;
    }
    if(!flag && x<=maxi) {
        for(int i=0;i<n;i++) {
            cout << a[i] << " " << a[i+n] << " ";
        }
        cout << x << endl;
        
    }
    else {
        ll x = a[2*n-1];
        a.pop_back(); 
        // sort(a.begin(),a.end());
        sum1=0,sum2=0;  
        for(int i=0;i<2*n-1;i++) {
            if(i<n-1)
            sum1+=a[i];
            else sum2+=a[i];
        }   
        cout << sum2-sum1 << " " << x << " ";
        for(int i=0;i<2*n-1;i++) {
            if(i<n-1) cout << a[i] << " ";
            else cout << a[i] << " ";
        }
        cout << endl;

    }   
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}