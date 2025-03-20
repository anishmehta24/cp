#include <bits/stdc++.h>
#define int long long 
const int MOD = 1e9 + 7;
using namespace std;


void solve() {
    int n;
	cin >> n;
	vector<int> a(n);
	vector<int> cnt(1e6 + 1);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		++cnt[a[i]];
	}
	int sum = accumulate(a.begin(), a.end(), 0ll);
	
	vector<int> ans;
	for (int i = 0; i < n; ++i) {
		sum -= a[i];
		--cnt[a[i]];
		if (sum % 2 == 0 && sum / 2 <= 1e6 && cnt[sum / 2] > 0) {
			ans.push_back(i);
		}
		sum += a[i];
		++cnt[a[i]];
	}
	
	cout << ans.size() << endl;
	for (auto it : ans) cout << it + 1 << " ";
	cout << endl;
	
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    // cin >> t;
    while (t--) {
        solve();
    }
}




