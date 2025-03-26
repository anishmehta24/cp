#include <bits/stdc++.h>
#define int long long 
const int MOd = 1e9 + 7;
using namespace std;

const int maxn = 1e7;

vector<bool> prime(maxn+1,true);
vector<int> p;
vector<int> f(maxn+1,0);
void sieve() {
    prime[0] = prime[1] = false;
    for(int i=2;i*i<=maxn;i++) {
        if(prime[i]) {
            p.push_back(i);
            for(int j=i*i;j<=maxn;j+=i) {
                prime[j] = false;
            }
        }
    }
}

void calculate() {
    for(int i=0;i<p.size();i++) {
        for(int a=1;a<maxn;a+=p[i]) {
            f[a*p[i]]++;
        }
    }
}

void solve() {
    int n;cin >> n ;
    // int c=0;
    // for(int i=1;i<n;i++) {
    //     for(int j=i+1;j<=n;j++) {
    //         int gcdij= gcd(i,j);
    //         int lcmij = (i*j)/gcdij;
    //         int f = lcmij/gcdij;
    //         if(prime[f]) c++;
    //     }
    // }
    cout << f[n] << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    sieve();
    calculate();
    while (t--) {
        solve();
    }
}




