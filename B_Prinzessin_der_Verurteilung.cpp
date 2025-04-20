#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;cin >> n;
    string s;cin >> s;
    for(char ch='a';ch<='z';ch++) {
        if(s.find(ch) == string::npos) {
            cout << ch << "\n";
            return;
        }
    }

    for(char ch='a';ch<='z';ch++) {
        for(char ch1='a';ch1<='z';ch1++) {
            string t={ch,ch1};
            // cout << t << "\n";
            if(s.find(t) == string::npos) {
                cout << t << "\n";
                return;
            }
        }
    }
    for(char ch='a';ch<='z';ch++) {
        for(char ch1='a';ch1<='z';ch1++) {
            for(char ch2='a';ch2<='z';ch2++) {
                string t = {ch,ch1,ch2};
                if(s.find(t) == string::npos) {
                    cout << t << "\n";
                    return;
                }
            }
        }
    }
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

