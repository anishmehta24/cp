#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <string>
#include <numeric>
#include <algorithm>
#include <queue>
const int MOD = 998244353;
#define ll long long int
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int x = 0; 
        string ans="";
        for (int i = 0; i < n; i++) {

            if (i != 0) { 
                if ((s[i] == '1') && x) {
                    ans+='-';
                } else {
                    ans+='+';
                }
            }
            if (s[i] == '1') {
                x = 1 - x; 
            }
        }
        cout << ans << endl;
    }
}