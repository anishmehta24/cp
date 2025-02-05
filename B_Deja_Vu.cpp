#include <iostream>
#include <vector>
#include <algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    fio;
    int t;
    cin >> t;
    
    while(t--) {
        int n, q;
        cin >> n >> q;
        
        vector<int> a(n), b(q);   // aays to store `a` and `b`
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];   // Input aay `a`
        }
        
        for (int i = 0; i < q; i++) {
            cin >> b[i];   
        }

        vector<int> smallerIdx(35, 1e9);
        
        for (int i = 0; i < q; i++) {
            if (smallerIdx[b[i]] == 1e9) {
                smallerIdx[b[i]] = i;
            }
        }

        for (int i = 0; i < n; i++) {
            int firstIdx = 1e9;
            
            for (int j = 1; j <= 30; j++) {
                if (a[i] % (1 << j) == 0) { 
                    firstIdx = min(firstIdx, smallerIdx[j]);  
                }
            }

            while (firstIdx < q) {
                a[i] += (1 << (b[firstIdx] - 1)); 
                int x = b[firstIdx] - 1;
                int nextIdx = 1e9;

                while(x >= 0) {
                    if(smallerIdx[x] != 1e9 && smallerIdx[x] > firstIdx) {
                        nextIdx = min(nextIdx, smallerIdx[x]);
                    }
                    x--;
                }
                firstIdx = nextIdx;  
            }
        }

        
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
