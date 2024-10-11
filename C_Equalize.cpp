#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define ll long long int

using namespace std;

int main()
{
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        ll ans = 0;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] != b[i])
            {
                if (i + 1 < n)
                {
                    if (a[i + 1] == b[i] && b[i + 1] == a[i])
                    {
                        i++;
                        ans++;
                    }
                    else
                        ans++;
                }
                else
                    ans++;
            }
        }
        cout << ans << endl;
    return 0;
}
