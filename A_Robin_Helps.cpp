#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; 
    
    while (t--) {
        int n, k;
        cin >> n >> k; 
        vector<int> arr(n);
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        int r= 0,c=0; 
        
        for (int i = 0; i < n; ++i) {
            if (arr[i] >= k) {
                r += arr[i];
            } 
            else if (arr[i] == 0 && r > 0) {
                c++;
                r--; 
            }
        }
        
        cout << c << endl;
    }
    
    return 0;
}
