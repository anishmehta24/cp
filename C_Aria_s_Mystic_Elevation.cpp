#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n; cin>>n;
    vector<vector<int>> a(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int ans=0;
    for(int i=0; i<n ;i++){
        for(int j=0; j<n ;j++){

            if(a[i][j] < 0){
                int x=min(n-i,n-j);
                int ind1=i, ind2=j;
                int mini=0;
                while(ind1 < n && ind2 < n && x>0){
                    mini = min(mini, a[ind1][ind2]);
                    a[ind1][ind2]=0;
                    ind1++;
                    ind2++;
                }
                ans -= mini;
            }
        }
    }
    cout<<ans<<endl;


}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}



