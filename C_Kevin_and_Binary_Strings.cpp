#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <string>
#include <numeric>
#include <algorithm>
#include <queue>
const int MOD = 998244353;
#define ll long long int
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        
        int x=s.size()-1;
        for (int i = 0 ; i < s.size() ; i++) { 
            if (s[i] == '0') {
                x=i;
                break;
            }
        }
        int y = x - 1;
        for (int i=x ; i < s.size() ; i++ ) {
            if(y<0) break;
            if (s[i] == '1') break;
            y--;
        }
        y++;
        int l = y+1;
        int r = s.size() - x + y;
        cout << 1 << " " << s.size() << " " << l << " " <<  r << endl ;
    }

    return 0;
}
