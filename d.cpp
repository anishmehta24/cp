#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    int n;cin >> n;
    vector<int> x(n) , y(n);
    for(int i=0;i<n;i++) {
        cin >> x[i] >> y[i];
    }
    
    if(n== 1) {
        cout << "1\n";
        return;
    }

    int minx = LLONG_MAX, minx2 = LLONG_MAX, maxx = LLONG_MIN, maxx2 = LLONG_MIN;
    int cminx = 0, cmaxx = 0;
    int miny = LLONG_MAX, miny2 = LLONG_MAX, maxy = LLONG_MIN, maxy2 = LLONG_MIN;
    int cminy = 0, cmaxy = 0;

    for (int i = 0; i < n; i++) {
        if (x[i] < minx) {
            minx2 = minx; 
            minx = x[i]; 
            cminx = 1; 
        }
        else if (x[i] == minx) cminx++;
        else if (x[i] < minx2) minx2 = x[i];
        if (x[i] > maxx) {
            maxx2 = maxx; 
            maxx = x[i]; 
            cmaxx = 1; 
        }
        else if (x[i] == maxx) cmaxx++;
        else if (x[i] > maxx2) maxx2 = x[i];

        if (y[i] < miny) {
            miny2 = miny; miny = y[i]; 
            cminy = 1; 
        }
        else if (y[i] == miny) cminy++;
        else if (y[i] < miny2) miny2 = y[i];
        if (y[i] > maxy) { 
            maxy2 = maxy; 
            maxy = y[i]; 
            cmaxy = 1; 
        }
        else if (y[i] == maxy) cmaxy++;
        else if (y[i] > maxy2) maxy2 = y[i];
    }
    int ans = (maxx - minx + 1) * (maxy - miny + 1);

    for (int i = 0; i < n; i++) {
        int x1 = (x[i] == minx && cminx == 1) ? minx2 : minx;
        int x2 = (x[i] == maxx && cmaxx == 1) ? maxx2 : maxx;
        int y1 = (y[i] == miny && cminy == 1) ? miny2 : miny;
        int y2 = (y[i] == maxy && cmaxy == 1) ? maxy2 : maxy;
        int area = ( x2 - x1 + 1) * (y2 - y1 + 1);

        if (area == n - 1) {
            area += min(x2 - x1 + 1, y2 - y1 + 1);
        } 
        else {
            area = max(area, n);
        }
        ans = min(ans, area);
    }


    if(ans < n) {
        cout << n << "\n";
        return;
    }
    cout << ans << "\n";

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    // precompute();
    while (t--) {
        solve();
    }
}
