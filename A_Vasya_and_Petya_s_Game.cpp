#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <string>
#include <numeric>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <queue>
const int MOD = 1e9+7;
#define ll long long int
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> isPrime(1005,1);

    for(int i=2;i<1005;i++){
        if(isPrime[i]){
            for(int j=2*i; j<1005 ;j+=i) {
                isPrime[j]=0;
            }
        }
    }
    
    vector<int> ans;
    for(int i=2;i<=n;i++){
        if(isPrime[i]){
            int x = i;
            while(x<=n){
                ans.push_back(x);
                x*=i;
            }
        }
    }
    cout << ans.size() << endl;
    for(auto i : ans) {
        cout << i << " " ;
    }
    cout << endl;
}