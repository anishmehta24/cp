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

ll lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}


int main() {
    int t;cin >> t;
    while(t--) {
        int a,b;
        cin >> a>>b;
        cout << lcm(a,b) << endl;
        // for(int i=min(a,b);;i++) {
        //     if(i%a == i%b){
        //         cout << i << endl;
        //         break;
        //     }
        // }
    }

}