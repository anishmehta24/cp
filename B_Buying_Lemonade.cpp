#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
#include <queue>
const int MOD = 1e9+7;
#define ll long long int
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin >> n >> k; 
        vector<ll> a(n+1);
        a[0]=0;
        
        for (int i = 1; i <= n; ++i) cin >> a[i]; 
        sort(a.begin(), a.end());

        ll x=0;
        // if(n==2) {cout << *max_element(a.begin(),a.end()) << endl; continue;}
        // x = k/n;
    
        ll c=0;
        for(int i=1;i<=n;i++){
            if(x+(n-i+1)*(a[i]-a[i-1])>=k){
                c+=(k-x);
                break;
            }

            c+=(n-i+1)*(a[i]-a[i-1]) + 1;
            x+=(n-i+1)*(a[i]-a[i-1]);
        }

        cout << c << endl;
    }
    
    return 0;
}
