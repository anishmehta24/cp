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
        int a , b , c;
        cin >> a >> b >> c;

        vector<int> x(3);
        x[0]=a;x[1]=b;x[2]=c;
        ll sum=a+b+c;
        int ans=0;
        int cnt=0;
        
        cnt = (n/sum) *3;
        ans = (n/sum) * sum;
        if(ans==n) cout << cnt << endl;
        else{
        for(int i=0;i<3;i++){
            if(ans+x[i]>=n) {
                cnt++;
                break;
            }
            else {
                ans+=x[i];

                cnt++;
            }
        }
        cout << cnt << endl;
        }
    }
}