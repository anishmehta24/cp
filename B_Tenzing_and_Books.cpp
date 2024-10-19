#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
#include <queue>
#define ll long long int
using namespace std;

int main() {
    long t;
    cin >> t;
    
    while (t--) {
        ll n, x;
        cin >> n >> x;
        
        ll ans = 0;
        for (int i = 0; i < 3; i++) {
            bool flag = true;
            for (int j = 0; j < n; j++) {
                ll m;
                cin >> m;
                
                if ((x | m) != x) {
                    flag = false;
                }
                if (flag) {
                    ans |= m;
                }
            }
        }
        if(x==ans) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}
