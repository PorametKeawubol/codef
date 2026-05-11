#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> a(7);
        int maxx = INT16_MIN;
        for (int n = 0; n < 7; n++)
        {
            cin >> a[n];
            maxx = max(maxx, a[n]);
            // cout << a[n];
        }
        int ans = 0;
        bool check = 0;
        for (int n = 0; n < 7; n++)
        {
            if (maxx == a[n] && check == 0)
            {
                ans += a[n];
                check = 1;
            }
            else
            {
                ans -= a[n];
            }
        }
        check = 0;
        cout << ans << endl;
    }
}