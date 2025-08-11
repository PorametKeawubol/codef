#include <bits/stdc++.h>
using namespace std;

int main()
{
 int t;
 cin >> t;
 while (t--)
 {
  int n;
  cin >> n;
  vector<long long> a(n), b(n);
  for (int i = 0; i < n; ++i)
   cin >> a[i];
  for (int i = 0; i < n; ++i)
   cin >> b[i];
  long long TOTO = 0;
  for (int i = 0; i < n; ++i)
   if (a[i] > b[i])
   {
    TOTO += (a[i] - b[i]);
   }
  cout << (TOTO + 1) << "\n";
 }
 return 0;
}