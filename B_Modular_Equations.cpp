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
    ll a,b;
    cin >> a >> b;
    int c=0;
    if(b==a) {
        cout << "infinity" << endl;
        return 0;
    }
    if(a<b) {
        cout << 0 << endl;
        return 0;
    }
    a-=b;
    if(a==1) {
        cout << (b==0) << endl;
        return 0;
    }

    for(ll i=1;i*i<=a;i++){
            if(a%i==0) {
                if(i>b && (a/i) > b) c+=2 - (i*i==a);
                else c +=(i>b) + ((a/i) > b);
            }
    }
    cout << c << endl;
    }