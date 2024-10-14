#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>
#define ll long long int
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<ll> a(n); 
        vector<ll> b(n); 

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

       ll c = 0;  
        ll m = 0;   
        ll ans = 0;  

        
        for (int p = 0; p < n && p < k; p++) {
            c += a[p];                
            m = max(m, b[p]);          
            ll t = c + (k - p - 1) * m;  
            ans = max(ans, t);         
        }

        cout << ans << endl;
       
    }

    return 0;
}
