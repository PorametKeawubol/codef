#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int main()
{
 int n, capacity;
 cin >> n >> capacity;
 cin.ignore(); // ล้าง newline หลังจากอ่าน capacity

 vector<pair<int, string>> items;

 for (int i = 0; i < capacity; i++)
 {
  string line;
  getline(cin, line); // อ่านทั้งบรรทัด เช่น "880 c 2kg"
  stringstream ss(line);
  int value;
  ss >> value;
  string rest;
  getline(ss, rest); // อ่านชื่อทั้งหมดที่เหลือ
  // ตัดช่องว่างหน้าชื่อ (ถ้ามี)
  if (!rest.empty() && rest[0] == ' ')
   rest = rest.substr(1);
  items.push_back({value, rest});
 }

 // เรียงจากมากไปน้อย
 sort(items.begin(), items.end(), [](const pair<int, string> &a, const pair<int, string> &b)
      { return a.first > b.first; });

 int totalValue = 0;
 vector<pair<int, string>> selectedItems;

 for (int i = 0; i < n && i < (int)items.size(); i++)
 {
  totalValue += items[i].first;
  selectedItems.push_back(items[i]);
 }

 // เรียงชื่อจากน้อยไปมากตาม value
 sort(selectedItems.begin(), selectedItems.end());

 cout << totalValue << endl;
 for (const auto &item : selectedItems)
 {
  cout << item.second << endl;
 }

 return 0;
}
