#include <iostream>
#include <string>
using namespace std;

int main() {
 int t;
 cin >> t;
 while (t--) {
  string b;
  cin >> b;
  string a;
  a += b[0];
  for (unsigned int i = 1; i < b.size(); i += 2) {
   a += b[i];
  }
  if (b.size() == 2) {
   cout << b << endl;
  } else {
   cout << a << endl;
  }
 }
 return 0;
}
