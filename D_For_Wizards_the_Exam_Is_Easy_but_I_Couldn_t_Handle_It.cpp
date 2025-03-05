#include <bits/stdc++.h>
#define ll long long int
const ll MOD = 1e9 + 7;
using namespace std;

void solve() {
    int n;cin >> n;
    vector<int> a(n);
    for (auto &i : a) cin >> i;

    int x = 0;
    for (int i=0;i<n;i++) {
        for (int j=i+1; j<n;j++) {
            if (a[i]>a[j]) x++;
        }
    }

    int left=1,right=1,ans=0;
    for (int l=0;l<n;l++){
        int y=0;
        for (int r=l+1;r<n;r++){
            if(a[r]>a[l]) y++; 
            else if(a[r]<a[l]) y--;
            if(y<ans){
                ans = y;
                left = l;
                right = r;
            }
        }
    }
    if(ans < 0)
    cout << left+1 << " " << right+1 << endl;
    else cout << "1 1" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}




