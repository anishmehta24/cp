#include <iostream>
#include <string>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        string a, b, c;
        cin >> a >> b >> c;

        int i = 0, j = 0, changes = 0;
        for (char ch : c) {
            if (i < a.size() && ch == a[i]) {
                i++;
            } else if (j < b.size() && ch == b[j]) {
                j++;
            } else {
                changes++; // Character does not match either string
            }
        }
        cout << changes << endl;
    }
}

int main() {
    solve();
    return 0;
}
