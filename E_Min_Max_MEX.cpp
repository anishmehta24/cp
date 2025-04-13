#include <bits/stdc++.h>
#define int long long
using namespace std;

bool possible(vector<int>& a, int k, int x) {
    if (x == 0) {  
        if(a.size() >= k) return true;
        return false;
    }
    vector<char> temp(x);
    int yes=0,c=0;
    for (int v : a) {
        if (v < x && !temp[v]) {
            temp[v] = 1;
            yes++;
            if (yes == x) {
                c++;
                if (c >= k) return true;
                temp.assign(x, 0);
                yes = 0;
            }
        }
    }
    if(c>=k) return true;
    return false;
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    vector<char> present(n+1, 0);
    for (int v : a) if (v <= n) present[v] = 1;
    int x = 0;
    while (x <= n && present[x]) x++;

    int l=0, h=x, ans = 0;
    while (l <= h) {
        int mid = (l + h)/2;
        if (possible(a, k, mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            h = mid - 1;
        }
    }

    cout << ans << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
