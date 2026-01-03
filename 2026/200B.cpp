#include <bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin >> t;
 double total = 0;
 for (int i = 0; i < t; i++)
 {
  int toto;
  cin >> toto;
  total += toto;
 }
 double ans = (total / t);
 cout << fixed << setprecision(12) << ans << endl;
}