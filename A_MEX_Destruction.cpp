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
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &i:a) cin >> i;
        int c=0;
        for(int i=0;i<n;i++) {
            if(a[i]==0){
                c++;
            }
        }

        if(c==n) cout << 0 << endl;
        else if(c==1) {
            if(a[0]==0 || a[n-1]==0) cout << 1 << endl;
            else cout << 2 << endl; 
        }
        // else if(c==2) {
        //     if(a[0]==0 && a[n-1]==0) cout << 1 << endl;
        //     else cout << 2 << endl;
        // }
        else if(c==0) cout << 1 << endl;
        else {
            int x=0;
            for(int i=0;i<n;i++) {
                if(a[i]!=0) break;
                x++;
            }
            if(x==c) cout << 1 << endl;
            else{
                int y=0;
                for(int i=n-1;i>=0;i--) {
                    if(a[i]!=0) break;
                    y++;
                }
                if(y==c) cout << 1 << endl;
                else if((x+y)==c) cout << 1 << endl;
                else cout << 2 << endl;
            }
            
        }
    }
}