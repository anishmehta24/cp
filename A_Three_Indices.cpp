#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define ll long long int
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
       int n;
       cin >> n;
       vector<ll> a(n);
       for(int i=0;i<n;i++){
        cin >> a[i];
    //    if(a[i]>max){
    //     max = a[i];
    //     ind=i;
    //    }
       }
       int c=0;
        for (int i = 1; i < n - 1; i++) {
            if (a[i] > a[i-1] && a[i] > a[i+1]) {
                cout << "YES" << endl;
                cout << i << " " << i+1 << " " << i+2 << endl;
                c=1;
                break;
            }
        }

        if(c==0)
        cout << "NO" << endl;
     
       
    }
    return 0;
}
