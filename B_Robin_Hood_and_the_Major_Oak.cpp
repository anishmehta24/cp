#include <iostream>
using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        int flag = 0;
        long long l;
        if (n - k + 1 >= 1) {
           l = n - k + 1;
        } 
        else {
          l = 1;
        }

        long long x = (n+1)/2 - l/2;
          if (x % 2 == 0) {
            cout << "YES" << endl; 
        } else {
            cout << "NO" << endl; 
        }

      
    }
    return 0;
}
