#include <bits/stdc++.h>
#define ll long long int
const ll MOD = 1e9 + 7;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        // int n;cin >> n;
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int ans =0;
        for(int i=-200;i<=200;i++) {
            int k = 0;
            if(a+b==i) k++;
            if(i+b == c) k++;
            if(i+c == d) k++;

            ans = max(k,ans);
        }
        cout << ans << endl;
    
    }
}