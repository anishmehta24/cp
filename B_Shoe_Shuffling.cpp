#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n); 
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        v.push_back(INT_MAX); 

        int c = 1, start = 0;
        bool flag = true;
        vector<int> ans; 

        for (int i = 1; i <= n; i++) {
            if (v[i] == v[i - 1]) {
                c++;
                continue;
            }
            if (c == 1) {
                flag = false;
                break;
            }
            ans.push_back(i); 
            for (int j = start; j < i - 1; j++) {
                ans.push_back(j + 1); 
            }
            start = i;
            c = 1;
        }

        if (flag) {
            for (int i = 0; i < ans.size(); i++) {
                cout << ans[i] << " ";
            }
            cout << endl;
        } 
        else {
            cout << -1 << endl;
        }
    }

    return 0;
}
