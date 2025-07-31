#include <bits/stdc++.h>
using namespace std;
#define all(a) a.begin(), a.end()

int main()
{
 string s;
 getline(cin, s);
 stringstream ss(s);
 vector<int> v;
 string token;

 // อ่านเป็น string แล้วตรวจสอบว่าเป็นตัวเลขหรือไม่
 while (ss >> token)
 {
  try
  {
   int num = stoi(token);
   v.push_back(num);
  }
  catch (...)
  {
   // ข้าม token ที่ไม่ใช่ตัวเลข
  }
 }

 if (!v.empty())
 {
  cout << v[0] << " " << v.back() << "\n";
 }
}