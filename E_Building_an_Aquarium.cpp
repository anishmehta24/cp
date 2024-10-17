#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>
#define ll long long int
using namespace std;

ll maxwater(ll h,vector<ll> a){
    ll sum=0;
    for(int i=0;i<a.size();i++){
        
            sum+= max(h - a[i], 0LL);
    }
    return sum;
}
 
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n,x;
        cin >> n >> x;
        vector<ll> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        ll l=0,r=2e9+7;
        ll ans=0;
        while(l<=r){
            ll mid = (l + r) / 2;
            if(maxwater(mid,a)<=x){
                 ans=mid;
                 l=mid+1;
            }
           
            else r = mid-1;       
        }
        cout << ans << endl;
    }
    return 0;
}

