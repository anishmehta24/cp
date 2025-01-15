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
        int cs = 0, cp = 0, cdot = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == 's') cs++;
            if(s[i] == 'p') cp++;
            if(s[i] == '.') cdot++;
        }

        if(cdot == n || cs == n || cp == n) cout << "YES" << endl;
        else if(cs == 0 || cp == 0) cout << "YES" << endl;
        else {

        vector<int> p(n, INT_MAX);
        vector<int> ss(n, INT_MAX);
        for(int i = 0; i < n; i++) {
            if(s[i] == 'p') p[i] = i + 1;
            if(s[i] == 's') ss[i] = n - i;
        }

        for(int i = 1; i < n; i++) {
            ss[i] = min(ss[i], ss[i - 1]);
        }

        for(int i = n - 2; i >= 0; i--) {
            p[i] = min(p[i], p[i + 1]);
        }

        vector<int> temp(n);
        for(int i = 0; i < n; i++) {
            temp[i] = min(ss[i], p[i]);
        }
        sort(temp.begin(), temp.end());

        bool flag = true;
        for(int i = 0; i < n; i++) {
            if(temp[i] < i + 1) {
                flag = false;
                break;
            }
        }

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
        }
    }
}
