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
       vector<ll> arr(n);
       for(int i=0;i<n;i++){
        cin >> arr[i];
    //    if(arr[i]>max){
    //     max = arr[i];
    //     ind=i;
    //    }
       }
       int c=0;
        for (int i = 1; i < n - 1; i++) {
            if (arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
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
