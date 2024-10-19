#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
#include <queue>
#define ll long long int
using namespace std;


ll possible(ll x,vector<ll> a,ll c){
    
    ll sum=0LL;
    for(int i=0;i<a.size();i++){
        sum += (a[i]+2*x)*(a[i]+2*x);
        if(sum>c)break;
    }

    return sum;
}

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        ll n, c;
        cin >> n>>c;
        
        
        vector<ll> a(n);

        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort(a.begin(),a.end());

        ll l=1,r=1e9;
        ll ans=0;
        while(l<=r){
            ll mid = l+(r-l)/2;
            if(possible(mid,a,c) == c){
                ans = mid;
                break;
            }
            else if(possible(mid,a,c)<c) {
                l=mid+1;
            }
            else
                r=mid-1;
        }

        cout << ans << endl;
        
    }
    
    return 0;
}
