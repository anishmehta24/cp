#include <bits/stdc++.h>
#define int long long 
const int MOD = 1e9 + 7;
using namespace std;

void solve() {
    int n;cin >> n;
    vector<int> p(n);
    for(auto &it:p) cin >> it;
    int x,a;cin >> x >> a;
    int y,b;cin >> y >> b;
    int k ;cin >> k;
    if(y>x) {
        swap(x,y);
        swap(a,b);
    }
    sort(p.rbegin(),p.rend());
    int l = 1,r = n;
    int ans = -1;
    int lcm = (a*b)/gcd(a,b);
    while(l<=r) {
        int mid = (l+r)/2;
        vector<int> temp(mid,0);
        int m = 0;
        int sum = 0;
        for(int i=lcm-1;i<mid;i+=lcm){
            temp[i] = p[m];
            sum +=(temp[i]/100)*(x+y);
            m++;
        }
        for(int i=a-1;i<mid;i+=a){
            if(temp[i] == 0) {
                temp[i] = p[m];
                sum +=(temp[i]/100)*x;
                m++;
            }
        }
        for(int i=b-1;i<mid;i+=b){
            if(temp[i] == 0) {
                temp[i] = p[m];
                sum +=(temp[i]/100)*y;
                m++;
            }
        }
        temp.clear();
        if(sum>=k) {
            ans = mid;
            r = mid-1;
        }
        else l = mid+1;
    }
    cout << ans << endl;    
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}