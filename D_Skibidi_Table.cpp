#include <bits/stdc++.h>
#define int long long
using namespace std;

int f1(int x, int y,int n) {
    if(n==1) {
        if(x==1 && y==1) return 1;
        if(x==2 && y==2) return 2;
        if(x==2 && y==1) return 3;
        else return 4;
    }

    int h = n/2;
    int ans = 0;

    if(x <= h && y <= h) {
        ans = 0;
    } 
    else if(x > h && y > h) {
        ans = 1;
        x-=h,y-=h;
    } 
    else if(x <= h && y > h) {
        ans = 2;
        y-=h;
    } 
    else {
        ans = 3;
        x-=h;
    }

    return( (ans * h * h) + f1(x,y,n-1));
    
}
pair<int,int> f2(int d, int n) {
    
    if (n == 1) {
        if(d == 1) return {1, 1};
        if(d == 2) return {1, 2};
        if(d == 3) return {2, 1};
        if(d == 4) return {2, 2};

    }
    int h = n/2;
    d--;              
    int ans = d / (h*h); 
    d %= (h*h);           
    auto [r, c] = f2(d+1, n-1);
    if (ans == 1) {       
        r += h; c += h;
    }
    else if (ans == 2) { 
        r += h;
    }
    else if (ans == 3) { 
        c += h;
    }
    return {r, c};
}  


void solve() {
    int n,q;cin >> n >> q;
    while(q--) {

        string s;cin >> s;
        // cout << s << "\n";
        if(s.substr()== "->"){
            int x,y;cin >> x >> y;
            // cout << x  << "\n";
            cout << f1(x,y,n) << "\n";
        }
        else {
            int d;cin >> d;
            auto [x,y] = f2(d,n);
            cout << x << " " << y << "\n";
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
