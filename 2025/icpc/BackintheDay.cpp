#include <bits/stdc++.h>
using namespace std;
#define all(a) a.begin(), a.end()
#define pb push_back
#define sz(a) ((int)a.size())

int main()
{
 array<string, 10> mp;
 mp[2] = "abc";
 mp[3] = "def";
 mp[4] = "ghi";
 mp[5] = "jkl";
 mp[6] = "mno";
 mp[7] = "pqrs"; // L=4
 mp[8] = "tuv";
 mp[9] = "wxyz"; // L-4
 string n;
 cin >> n;
 char cur = n[0];
 int posstart = 0;
 int len = 0;
 string ans = "";
 for (int i = 0; i < sz(n); i++)
 {
  if (n[i] != cur)
  {
   len = i - posstart;
   int digit = cur - '0';
   // cout << digit;
   if (len > 0 && len <= mp[digit].size())
   {
    if (len > 3)
    {
     ans += mp[digit][3];
    }
    else
    {
     ans += mp[digit][len - 1];
    }
    cur = n[i];
    posstart = i;
   }
  }
 }
 cout << ans << endl;
}