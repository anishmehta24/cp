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

    while (t--) {
        int n;  
        cin >> n;

        int c = 0,i=1;  

        while (true) {
            
            c -= (2 * i - 1);
            if (abs(c) > n) {
                cout << "Sakurako" << endl;
                break;
            }
            i++;
            c += (2 * i - 1);
            if (abs(c) > n) {
                cout << "Kosuke" << endl;
                break;
            }
            i++;  
        }
    }

    return 0;
}
