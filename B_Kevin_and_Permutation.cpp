#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        
    
        vector<int> ans(n, -1); 
        int num=1;
        for (int i = k - 1; i < n; i += k) {
            ans[i] = num++;
        }

        for (int i = 0; i < n; i++) {
            if (ans[i] == -1) {
                ans[i] = num++;
            }
        }

         for(int i=0;i<n;i++) {
                cout << ans[i] << " ";
            }
            cout << endl;

      
    }

    return 0;
}
