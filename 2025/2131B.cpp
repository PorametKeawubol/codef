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
  for (int i = 1; i <= n; i++)
  {
   long long TOTO;
   if (i & 1)
    TOTO = -1;
   else
    TOTO = (i == n ? 2 : 3);
   cout << TOTO << (i == n ? '\n' : ' ');
  }
 }
 return 0;
}