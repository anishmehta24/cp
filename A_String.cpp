#include <bits/stdc++.h>
#define ll long long int
const int MOD = 1e9+7;
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s; cin >> s;
        int c=0;
        for(int i=0;i<s.size();i++) {
            if(s[i]=='1') c++;
        }
            cout << c << endl;
    }
}
