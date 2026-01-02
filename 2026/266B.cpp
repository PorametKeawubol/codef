#include <bits/stdc++.h>
using namespace std;

int main()
{
 int m, e;
 cin >> m >> e;
 string t;
 cin >> t;

 while (e--)
  for (int i = 0; i + 1 < m; i++)
   if (t[i] == 'B' && t[i + 1] == 'G')
   {
    swap(t[i], t[i + 1]);
    i++;
   }

 cout << t;
}
