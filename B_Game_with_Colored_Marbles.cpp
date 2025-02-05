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

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a.begin(),a.end());
        map<int, int> mp;
        
        for (int i = 0; i < n; i++)
            mp[a[i]]++;
        ll ans=0;
        ll c=0;
        for (auto it = mp.begin(); it != mp.end(); ++it) {
            if(it->second > 1){
                ans++;
            }
            else if(it->second == 1) c++;
        }    
        ans+= (c%2==0)?c/2 +c/2 :2*((c/2) +1); 
        cout << ans << endl;     
    }
}