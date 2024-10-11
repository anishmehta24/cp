#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


void solve(long long n) {
    long long l=1,r = 2e18,ans=0;

    while(l<=r){
        long long mid = (l+r)/2;
        long long x = sqrt(mid);
        while(x*x > mid) x--;
        while((x+1)*(x+1)<=mid) x++;

        long long m = mid - x;
        if(m>=n){
            ans = mid;
            r = mid-1;
        }
        else l = mid+1;
    }
    cout << ans << endl;

}


int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long k;
        cin >> k;
        
        long long n = k;
       solve(n);
    }
    
    return 0;
}
