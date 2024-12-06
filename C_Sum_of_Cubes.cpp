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

int main(){
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        set<ll> s;
        for(ll i=1;i<=10000;i++) {
            s.insert(i);
        }
        int c=0;
        for(ll i=1;i<10000;i++) {
            double y =cbrt(n-(i*i*i));
            ll x = cbrt(n-(i*i*i));
            if(x>0) {
                if(x==y)
                if(s.find(x)!=s.end()) {
                    cout << "YES" << endl;
                    c=1;
                    break;
                }
            }
            else break;
        }
        if(c==0) cout << "NO" << endl;
    }
}