#include <bits/stdc++.h>
using namespace std;
#define all(a) a.begin(), a.end()
using ll = long long;
// https://trap.jp/post/1224/
#define rep1(n) for (ll i = 0; i < (ll)(n); ++i)
#define rep2(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define rep3(i, a, b) for (ll i = (ll)(a); i < (ll)(b); ++i)
#define rep4(i, a, b, c) for (ll i = (ll)(a); i < (ll)(b); i += (c))
#define cut4(a, b, c, d, e, ...) e
#define rep(...) cut4(__VA_ARGS__, rep4, rep3, rep2, rep1)(__VA_ARGS__)

int main()
{
 int tt;
 cin >> tt;
 while (tt--)
 {
  int n, k;
  cin >> n >> k;
  vector<int> s(n);
  vector<int> t(n);
  rep(n)
  {
   cin >> s[i];
   s[i] %= k;
   s[i] = min(s[i], k - s[i]);
  }
  rep(n)
  {
   cin >> t[i];
   t[i] %= k;
   t[i] = min(t[i], k - t[i]);
  }
  // sort(all(s));
  // sort(all(t));
  cout << ((s == t) ? "YES\n" : "NO\n");
 }
}