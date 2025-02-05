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
        int n,m;cin >> n >> m;
        vector<vector<int>> a(n,vector<int>(m));
        for(auto &u:a) {
            for(auto &v:u) cin >> v;
        }

        for(int i=0;i<n;i++) {
            sort(a[i].begin(),a[i].end());
        }
       
        map<int,int> mp;
        for(int i=0;i<n;i++) {
            mp[a[i][0]] = i;
        }

        sort(a.begin(), a.end(), [](const vector<int>& d, const vector<int>& b) {
            return d[0] < b[0];  
        });

        // for(int i=0;i<n;i++) {
        //     for(int j=0;j<m;j++) {
        //         cout << a[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        bool flag = true;
        for(int i=0;i<m;i++) {
            for(int j=0;j<n-1;j++) {
                if(a[i][j] > a[i][j+1]) {
                    flag = false;
                    break;
                }
            }if(flag==false) break;
        }

        if(flag) {
            for(auto it:mp) {
                cout << it.first << "->";
                cout << it.second + 1 << " ";
            }
            cout << endl;
        }
        else cout << -1 << endl;
    }
}