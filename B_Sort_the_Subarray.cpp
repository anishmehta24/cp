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
    ll t;
    cin >> t;
    
    while (t--) {
        ll n; cin >> n ;
        vector <ll> a(n);
        vector <ll> b(n);

        for(auto &i : a) cin >> i;
        for(auto &i : b) cin >> i;

        ll l=0,r=0;
        for(int i=0;i<n;i++){
            if(a[i] != b[i]){
                l=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--  ){
            if(a[i]!=b[i]){
                r=i;
                break;
            }
        }
        while(l > 0 && a[l - 1] <= b[l])
			l--;
		while(r < n - 1 && a[r + 1] >= b[r])
			r++;
        cout << l+1 << " " << r+1 << endl;
    }

    return 0;
}
