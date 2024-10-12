#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t; 
    cin >> t;
    
    while (t--) {
        int n, k;  
        cin >> n >> k;
        
        string s;
        cin >> s;
        
        int changes = k; 

        int white = 0;
        for (int i = 0; i < k; i++) {
            if (s[i] == 'W') {
                white++;
            }
        }
        
        changes = white;

       
        for (int i = k; i < n; i++) {
           
            if (s[i - k] == 'W') {
                white--;
            }
            if (s[i] == 'W') {
                white++;
            }
            
            changes = min(changes, white);
        }
        
        cout << changes << endl;
    }

    return 0;
}
