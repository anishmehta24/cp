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
        int n;
        cin >> n;

        vector<ll> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        ll ans = a[0];
        ll mn = min(0ll,a[0]);
        ll sum = a[0]; 
        int l=0;int r=1;
        while(r<n){

            // if(a[r]<0) {r++;continue;}
           
            if ((abs(a[r] - a[r-1])%2==0 )) {
                mn =0;
                sum = 0; 
               
            } 
                sum += a[r];
                ans = max(ans, sum-mn); 
                mn = min(sum,mn);
                r++;
            
        }

       
        //  ans = max(ans, sum);

        cout << ans << endl;

    }

    return 0;
}

