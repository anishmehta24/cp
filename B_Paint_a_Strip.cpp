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
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n==1) cout << 1 << endl;
        else if(n==2 || n==3 || n==4) cout  << 2 << endl;
        else {       
             int c=1;
             ll x=1;
             int i=0;
             while(x < n){       
                c++;
                x=3*pow(2,i)-2;
                i++;
             }
             cout << i << endl;
        }
    }
}