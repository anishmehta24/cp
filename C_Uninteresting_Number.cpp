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

void solve() {
    string n;
    cin >> n;

    ll sum = 0;
    int c2 = 0, c3 = 0;

    for (char c : n) {
        int d = c - '0';
        if (d == 2) c2++;
        else if (d == 3) c3++;
        sum += d;
    }
    if (sum % 9 == 0) {
        cout << "YES"<< endl; 
        return;
    }

    for (int i = 0; i <= c2; i++) {          
        for (int j = 0; j <= c3; j++) {      
            ll new_sum = sum + i * 2 + j * 6;
            if (new_sum % 9 == 0) {
                cout << "YES"<< endl; 
                return;
            }
        }
    }

   
    cout << "NO"<< endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
