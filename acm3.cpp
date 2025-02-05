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
        vector<int> a(n);
        for(auto &i:a) cin >> i;
        int x=0,y=0,k=0,l=0;
        for(int i=0;i<n;i++) {
            if(a[i]>a[x]) x=i;
            if(a[i]<a[y]) y=i;
        }
        if(x==0) k=1;
        if(y==0) l=1; 
        for(int i=0;i<n;i++) {
            if(i!=x && a[i]>a[k]) k=i;
            if(i!=y && a[i]<a[l]) l=i;
        }
        cout << a[x]-a[k]+a[x]-a[l]+a[y]-a[k]+a[y]-a[l]<< endl;
        


    }
}
