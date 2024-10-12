#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define ll long long int
using namespace std;

bool canFormAP(ll a, ll b, ll c) {

    if ((2 * b - c) % a == 0 && (2 * b - c) / a > 0) return true;   
    if ((a + c) % (2 * b) == 0 && (a + c) / (2 * b) > 0) return true;
    if ((2 * b - a) % c == 0 && (2 * b - a) / c > 0) return true;
     
    return false;
}

int main() {
    int t;
    cin >> t; 

    while (t--) {
        ll a, b, c;
        cin >> a >> b >> c; 

        if (canFormAP(a, b, c)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
