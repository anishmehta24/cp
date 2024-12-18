#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <iomanip>
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
    ll a,b,c,d;
    cin >> a >> b >> c >> d;

    cout << setprecision(12)<< fixed;

   cout << (double(a)/b) / (1 - (1 - double(a)/b) * (1 - double(c)/d)) << endl;

}