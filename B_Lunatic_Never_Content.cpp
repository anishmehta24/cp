#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> 
#define ll long long int
using namespace std;

bool isPallindrome(const vector<ll>& a) {
    int n = a.size();
    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    
    ll t;
    cin >> t;
    
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        if (isPallindrome(a)) {
            cout << 0 << endl;
            continue;
        }

       
        ll gcdv = 0;
        for (ll i = 0; i < n / 2; i++) {
            gcdv = gcd(gcdv, abs(a[i] - a[n - i - 1]));
        }
        
        cout << gcdv << endl;
    }

    return 0;
}
