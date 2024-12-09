#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <string>
#include <numeric>
#include <algorithm>
#include <queue>
const int MOD = 1e9+7;
#define ll long long int
using namespace std;

string solve(string s) {
    bool changed = true;
    while (changed) {
        changed = false;
        for (int i = 1; i < s.size(); ++i) {
            if (s[i] > '0' && s[i] - 1 > s[i - 1]) {
                s[i]--;
                swap(s[i], s[i - 1]);
                changed = true;
            }
        }
    }
    return s;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << solve(s) << endl;
       
    }
    return 0;
}
