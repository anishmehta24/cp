#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <string>
#include <numeric>
#include <algorithm>
#include <queue>
#define ll long long int
const ll MOD = 1e9+7;
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int c0=0;
    for(auto &i:a) {
        cin >> i;
        if(i==0) c0++;
    }
    int ans = 0;  
    int prev = 0;
    int curr = 0; 
    if(c0==0) cout << n-1 << endl;
    else{

        for (int i = 0; i < n; ++i) {
            if (a[i] == 1) {
                curr++;
            } else {       
                ans = max(ans, prev + curr);
                prev = curr;  
                curr = 0; 
            }
        }
        ans= max(ans, prev + curr);
        cout << ans << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
