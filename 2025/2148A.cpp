#include <bits/stdc++.h>
using namespace std;
int main(){
 unsigned int t;
 cin >> t;
 while (t--){
  int x,n;
  cin >> x  >> n;
  cout << ( (n & 1) ? x : 0 ) << "\n";
 }
}


