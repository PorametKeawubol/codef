#include <bits/stdc++.h>
using namespace std;
#define all(a) a.begin(), a.end()

int main()
{
 int t;
 cin >> t;
 cin.ignore();
 while (t--)
 {
  string s;
  getline(cin, s);
  stringstream ss(s);
  vector<int> v;
  int num;
  while (ss >> num)
  {
   v.push_back(num);
  }
  int max = *max_element(all(v));
  int min = *min_element(all(v));
  cout << min << " " << max << "\n";
 }
}