#include <bits/stdc++.h>
#define int long long 
const int MOd = 1e9 + 7;
using namespace std;



void solve() {
    int n,m;cin >> n >> m;
    // vector<vector<int>> a(n, vector<int>(m));
    vector<string> a(n); 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // vector<vector<int>> vis(n, vector<int>(m, 0));
    int c=0;

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(a[i][j] == '0') c++;
        }
    }
    if(c==n*m || c==0) {
        cout << "YES" << endl;
        return;
    }

    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(a[i][j]=='1'){
                bool flag1 = true;
                for(int k=0;k<i;k++){
                    if(a[k][j]=='0'){
                        flag1=false;
                    }
                }
                bool flag2=true;
                for(int k=0;k<j;k++){
                    if(a[i][k]=='0'){
                        flag2=false;
                    }
                }
                if(!flag1 && !flag2){   
                   cout << "NO" << endl;
                   return ;
                }
            }
            
        }
      
    }
    cout<<"YES" << endl;
   
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




