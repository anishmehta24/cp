#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>
#define ll long long int
using namespace std;

const int MOD = 1e9 + 7;

int main() {
   
    int t;
    cin >> t;

    vector<int> n(t), k(t);
    for (int i = 0; i < t; i++) {
        cin >> n[i];
    }
    for (int i = 0; i < t; i++) {
        cin >> k[i];
    }
   
    for (int i = 0; i < t; i++) {
        ll ans=1,x=2;

        while (k[i] > 0) {
            if (k[i] % 2 == 1) {
                ans = (1LL * ans * x)% MOD ;
            }
            x= (1LL * x * x) % MOD ;
            k[i] /= 2;
        }
        cout << ans << endl;
    }

    return 0;
}
