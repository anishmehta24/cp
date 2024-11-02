#include <iostream>
#include <vector>
#include <map>
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
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        int l=0,r=n-1   ;
        int sum1=a[0],sum2=a[n-1];
        int ans=0;
        while(l<r) {
           if(sum1==sum2){
            ans = max(ans,l+1+n-r);
            l++;
            sum1+=a[l];
           }
           else if(sum1<sum2) {
            l++;
            sum1+=a[l];
           }
           else {
            r--;
            sum2+=a[r];
           }
        }
        
            cout << ans << endl;
        
    }
}



