#include <bits/stdc++.h>
#define ll long long int
const ll MOD = 1e9+7;

using namespace std;



int main() {
    int t;
    cin >> t;
    while(t--) {
        int a,b;
        cin >> a >> b;
        if(a==b && a==1) cout << 1 << endl; 
        else cout << abs(b-a) << endl;
    }
}