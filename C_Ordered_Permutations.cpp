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

vector<vector<int>> maxPermutations;
long long maxS = 0;

// Function to compute S(p) for a given permutation
long long computeS(const vector<int>& p) {
    int n = p.size();
    long long sum = 0;
    for (int l = 0; l < n; ++l) {
        int currentMin = INT_MAX;
        for (int r = l; r < n; ++r) {
            currentMin = min(currentMin, p[r]);
            sum += currentMin;
        }
    }
    return sum;
}

void generatePermutations(vector<int>& perm, vector<bool>& used, vector<int>& current, int n) {
    if (current.size() == n) {
        long long currentS = computeS(current);
        if (currentS > maxS) {
            maxS = currentS;
            maxPermutations.clear();
            maxPermutations.push_back(current);
        } else if (currentS == maxS) {
            maxPermutations.push_back(current);
        }
        return;
    }
    for (int i = 1; i <= n; ++i) {
        if (!used[i]) {
            used[i] = true;
            current.push_back(i);
            generatePermutations(perm, used, current, n);
            current.pop_back();
            used[i] = false;
        }
    }
}

int main() {
    int t;
    cin >>t ;
    while(t--){
        int n, k;
        cin >> n >> k;

        vector<int> perm;
        vector<bool> used(n + 1, false);
        vector<int> current;

        // Generate all permutations and calculate S(p)
        generatePermutations(perm, used, current, n);

        // Output the k-th permutation if it exists
        if (k > maxPermutations.size()) {
            cout << -1 << endl;
        } else {
            for (int val : maxPermutations[k - 1]) {
                cout << val << " ";
            }
            cout << endl;
        }

    }
    return 0;
}
