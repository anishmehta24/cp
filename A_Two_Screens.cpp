#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;

        int n = s1.length();
        int m = s2.length();

        int ans = n + m;

        for (int i = 0; i < min(n, m); i++) {

            if (s1.substr(0, i + 1) == s2.substr(0, i + 1)) {

                int x = n+m-i;
                ans = min(ans, x);
            }
        }
        cout << ans << endl;
    }

    return 0;
}
