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

bool solve(vector<ll> a,ll k) {
    set<ll> s;
    for(int i=0;i<a.size();i++){
        s.insert(a[i] % k);
        if(s.size()>2) break;
    }
    return (s.size()==2);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for(int i;i<n;i++) cin >> a[i];
        if(n==2) {
            cout << 1 << endl;
            continue;
        }
        cout << 2 << endl;
    }
}