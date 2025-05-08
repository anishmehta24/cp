    #include <bits/stdc++.h>
    using namespace std;
    #define int long long



    void solve() {
        int n;cin >> n;
        string s;cin >> s;
        vector<string> a(n);
        for(int i=0;i<n;i++) {
            a[i] = s;
            if(a[i][i] == '1') {
                a[i][i] = '0';
            } else {
                a[i][i] = '1';
            }
        }
        int ans = 0;
        for(auto &x : a) {
            for(char &c : x) {
                if(c == '1') ans++;
            }
        }
        cout << ans << "\n";
    }

    signed main() {
        ios::sync_with_stdio(false);
        cin.tie(0);
        int t=1;
        cin >> t;
        while (t--) {
            solve();
        }
        
    }
