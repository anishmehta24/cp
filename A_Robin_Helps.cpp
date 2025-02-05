#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; 
    
    while (t--) {
        int n, k;
        cin >> n >> k; 
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int r= 0,c=0; 
        
        for (int i = 0; i < n; ++i) {
            if (a[i] >= k) {
                r += a[i];
            } 
            else if (a[i] == 0 && r > 0) {
                c++;
                r--; 
            }
        }
        
        cout << c << endl;
    }
    
    return 0;
}
