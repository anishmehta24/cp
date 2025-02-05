#include <bits/stdc++.h>
#define ll long long int
const ll MOD = 1e9 + 7;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        int n;cin >> n;
        vector<vector<int>> a(n,vector<int>(n));
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) cin >> a[i][j];
        }

        vector<int> temp;
        for(int i=0;i<n;i++) {
            int c=0;
            for(int j=n-1;j>=0;j--) {
                if(a[i][j]!=1) break;
                else c++;
            }
            temp.push_back(c);
        }
        int i=0;
        sort(temp.begin(),temp.end());
        for(int k=0;k<n;k++) {
            if(temp[k] >= i) i++;
        }

        cout << i << endl;

       

    }
}