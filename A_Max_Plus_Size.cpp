#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t; 
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
       
        int oddMax = 0;
        int odd = 0;
        
      
        int evenMax = 0;
        int even = 0;
        
        
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {  
                evenMax = max(evenMax, a[i]);
                even++;
            } else { 
                oddMax = max(oddMax, a[i]);
                odd++;
            }
        }
        
        
        int oddAns = oddMax + odd;
        int evenAns = evenMax + even;
        
        
        cout << max(oddAns, evenAns) << endl;
    }
    
    return 0;
}
