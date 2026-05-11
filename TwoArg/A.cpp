#include <bits/stdc++.h>
using namespace std;
#define all(a) a.begin(), a.end()
int main()
{
 vector<tuple<string, int, int, int>> birthdate;
 while (true)
 {
  string name;
  int day, month, year;
  cin >> name >> day >> month >> year;
  if (cin.eof())
   break;
  birthdate.emplace_back(name, day, month, year);
 }
 sort(birthdate.begin(), birthdate.end(), [](const auto &a, const auto &b)
      { return tie(get<3>(a), get<2>(a), get<1>(a)) < tie(get<3>(b), get<2>(b), get<1>(b)); });

 for (const auto &[name, day, month, year] : birthdate)
 {
  cout << name << " " << day << " " << month << " " << year << endl;
 }
}
