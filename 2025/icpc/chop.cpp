#include <bits/stdc++.h>
using namespace std;

int main()
{
 ios::sync_with_stdio(false);
 cin.tie(nullptr);

 int t;
 if (!(cin >> t))
  return 0;

 long long max1 = -1, max2 = -1;
 for (int i = 0; i < t; ++i)
 {
  long long x;
  cin >> x;
  if (x >= max1)
  {
   max2 = max1;
   max1 = x;
  }
  else if (x > max2)
  {
   max2 = x;
  }
 }

 cout << (max1 * max2) << '\n';
 return 0;
}
