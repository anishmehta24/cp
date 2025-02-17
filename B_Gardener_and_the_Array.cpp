#include <bits/stdc++.h>
#define ll long long int
const ll MOD = 1e9 + 7;
using namespace std;

void solve() {
    int n;cin >> n;
    vector<int> k(n);
    vector<vector<int>> a(n);
    map<int,int> freq;
    for(int i=0;i<n;i++) {
        cin >> k[i];
        a[i].resize(k[i]);
        for(int j=0;j<k[i];j++) {
            cin >>a[i][j];
        }

        sort(a.begin(),a.end());
        for(int x:a[i]) {
            freq[x]++;
        }
    }


    bool flag1= false;

    for(int i=0;i<n;i++) {
        bool flag2 = true;
        for(int x:a[i]) {
            if(freq[x] < 2) {
               flag2=false;
               break;
            }
        
        }
        if(flag2) {
            flag1=true;
            break;
        }
    }

    cout << ((flag1) ? "YES\n":"NO\n"); 

    
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