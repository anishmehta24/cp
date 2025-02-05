    #include <iostream>
    #include <vector>
    #include <map>
    #include <set>
    #include <math.h>
    #include <string>
    #include <numeric>
    #include <cstring>
    #include <algorithm>
    #include <queue>
    #define ll long long int
    const int MOD = 1e9+7;
    using namespace std;

    int main() {
        int t;
        cin >> t;
        while(t--) {
            int n;cin >> n;
            vector<int> a(n);
            for(auto &i:a) cin >> i;
            bool flag = false;
            for(int i=0;i<n;i++) {
               if(a[i]<=i*2||a[i]<=(n-i-1)*2){
                flag=true;
                break;
               }
            }
           
            if(flag) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }
