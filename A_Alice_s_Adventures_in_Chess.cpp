#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <string>
#include <numeric>
#include <algorithm>
#include <queue>
const int MOD = 1e9+7;
#define ll long long int
using namespace std;

int main() {
    int t ;
    cin >> t;
    while(t--) {
        int n,a,b;
        cin >> n>>a>>b;
        string s;
        cin >> s;
        int x=0,y=0;
        bool flag = false;
        for(int j=0;j<100;j++){
        for(int i=0;i<n;i++){
            if(s[i]=='N') y++;
            else if(s[i]=='E') x++;
            else if(s[i]=='S') y--;
            else if(s[i]=='W') x--;
            if(x==a && y==b) {
                flag = true;
                break;
            }
        }
            if(x==a && y==b) {
                flag = true;
                break;
            }
        }
        if(flag) cout <<"YES"<< endl;
        else cout << "NO" << endl;
    }
}