#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define ll long long int
using namespace std;

int min_steps(string s, char first, char second) {
    int n = s.size();
    int pos1 = -1, pos2 = -1;
    
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == second) {
            pos2 = i;
            break;
        }
    }
    
    
    for (int i = pos2 - 1; i >= 0; i--) {
        if (s[i] == first) {
            pos1 = i;
            break;
        }
    }
    
    return n - pos1 - 2;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        
        int steps = min({ min_steps(s, '0', '0'),min_steps(s, '2', '5'),min_steps(s, '5', '0'), min_steps(s, '7', '5')});
        
        cout << steps << endl;
    }
    
    return 0;
}
