#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        map<int, int> ans1, ans2;
        int cnt = 1;
        int mx = -1;

        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) {
                cnt++;
            } 
            else {
                ans1[a[i - 1]] = max(ans1[a[i - 1]], cnt);
                mx = max(mx, ans1[a[i - 1]]);
                cnt = 1;
            }
        }
        ans1[a[n - 1]] = max(ans1[a[n - 1]], cnt);
        mx = max(ans1[a[n - 1]], mx);

        
        cnt = 1;

        for (int i = 1; i < n; i++) {
            if (b[i] == b[i - 1]) {
                cnt++;
            } 
            else {
                ans2[b[i - 1]] = max(ans2[b[i - 1]], cnt);
                mx = max(mx, ans2[b[i - 1]]);
                mx = max(mx, ans1[b[i - 1]] + ans2[b[i - 1]]);
                cnt = 1;
            }
        }
        ans2[b[n - 1]] = max(ans2[b[n - 1]], cnt);
        mx = max(ans2[b[n - 1]], mx);
        mx = max(mx, ans1[b[n - 1]] + ans2[b[n - 1]]);

        cout << mx << "\n";
    }

    return 0;
}
