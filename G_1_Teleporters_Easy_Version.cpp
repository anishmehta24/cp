#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <string>
#include <numeric>
#include <algorithm>
#include <queue>
const int MOD = 1e9+7;
#define ll long long int
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
            int n, c; 
            cin >> n >> c;
            int ans=0;
            priority_queue<int> q;
            for(int i = 1, x; i <= n; ++i) {
                cin >> x;
                q.push(-(x + i));
            }
            while(!q.empty()) {
                int x = -q.top(); q.pop();
                if(x > c) break;
                ans++;
                c -= x;
            }
            cout << ans << endl;
    }   
}