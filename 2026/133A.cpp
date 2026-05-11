#include <bits/stdc++.h>
using namespace std;
int main()
{
 string sss;
 cin >> sss;
 for (auto s : sss)
 {
  if (s == 'H' || s == 'Q' || s == '9')
  {
   cout << "YES";
   return 0;
  }
 }
 cout << "NO";
}