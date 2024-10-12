#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define ll long long int

using namespace std;

int main() {
    int t; 
    cin >> t;
    
    while (t--) {
        ll w, h;  
        cin >> w >> h;
        ll k;
        cin >> k;
        vector<ll> x(k);
        for(ll i=0;i<k;i++){
            cin >>x[i];
        }

        ll k2;
        cin >> k2;
        vector<ll> x2(k2);
        for(ll i=0;i<k2;i++){
            cin >>x2[i];
        }


        ll k3;
        cin >> k3;
        vector<ll> y(k3);
        for(ll i=0;i<k3;i++){
            cin >> y[i];
        }

        ll k4;
        cin >> k4;
        vector<ll> y2(k4);
        for(ll i=0;i<k4;i++){
            cin >> y2[i];
        }

        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        sort(x2.begin(),x2.end());
        sort(y2.begin(),y2.end());

         
        ll ans1 = max(w*(y2[k4-1]-y2[0]),h*(x2[k2-1]-x2[0]));
        ll ans2 = max(w*(y[k3-1]-y[0]),h*(x[k-1]-x[0]));

        ll ans = max(ans1,ans2);
        cout << ans << endl;
     
    }

    return 0;
}
