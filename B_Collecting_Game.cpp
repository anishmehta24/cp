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
        ll n;
        cin >> n;

        vector<ll> a(n);
        vector<ll> b(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++) {
            b[i]=a[i];
        }

        sort(b.begin(), b.end());

        vector<ll> p(n);
        p[0]=b[0];
        for(ll i=1;i<n;i++){
            p[i]=p[i-1]+b[i];
        }


        map<int,int> mp;
        mp[b[n-1]]=n-1;
        for(int i=n-2;i>=0;i--){
           if(p[i]>=b[i+1])
             mp[b[i]]=mp[b[i+1]];
            else
              mp[b[i]]=i;
        }

        for(ll i=0;i<n;i++){
            cout<< mp[a[i]] << " ";
        }

       cout << endl;
    }

    return 0;
}
