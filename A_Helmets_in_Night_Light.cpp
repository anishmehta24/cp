#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){

    ll t;
    cin>>t;
    while(t--){
        ll n, r; cin >> n >> r;
        
        vector<pair<ll, ll>> v(n);
        for(ll i = 0; i < n; i++){
            cin >> v[i].second;
        }
        for(ll i = 0; i < n; i++){
            cin >> v[i].first;
        }
        sort(v.begin(), v.end());

        ll rem = n-1, total = r;
        for(ll i = 0; i < n; i++){
            if(v[i].first >= r){
                break;
            }
            ll cnt = (rem < v[i].second) ? rem : v[i].second;
            total += cnt * v[i].first;
            rem -= cnt;
        }

        total += r * rem;
       cout << total << endl;
    }

}