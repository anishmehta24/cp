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
        ll n,k; cin >> n >> k;
        vector <ll> a(n);
        ll sum=0;
        for(int i=0;i<n;i++){
             cin >> a[i];
             sum+=a[i];
        }

        sort(a.begin(),a.end());
        int l=0,r=n-1;
        ll sum2=sum;
        for(int i=0;i<k;i++){
            sum2-=a[r--];
        }
        ll sum3=sum;
        for(int i=0;i<k;i++){
            sum3 = sum3 -a[l]-a[l+1];
            l+=2;
        }
        l=0;
        r=n-1;
        for(int i=0;i<k;i++){
            if((a[l] + a[l+1]) > a[r]) {
                sum = sum - a[r];
                r--;
            }
            else {
                sum = sum - a[l] -a[l+1];
                l+=2;
            }
        }
        ll maxSum = max(sum,max(sum2,sum3));
        cout << maxSum << endl;
       
    }

    return 0;
}
