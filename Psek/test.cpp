#include <bits/stdc++.h>
using namespace std;

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

 int t;
 cin >> t;

 while (t--)
 {
  // อ่าน input ตามที่ต้องการ
  // ประมวลผลและ output
 }
}
int main1()
{
 int num, minVal = INT_MAX, maxVal = INT_MIN;

 while (cin >> num)
 {
  minVal = min(minVal, num);
  maxVal = max(maxVal, num);
 }

 cout << minVal << " " << maxVal << "\n";
}

int main3()
{
 string token;
 vector<int> v;

 while (cin >> token && token != "#")
 {
  v.push_back(stoi(token));
 }

 auto [minVal, maxVal] = minmax_element(v.begin(), v.end());
 cout << *minVal << " " << *maxVal << "\n";
}

#include <bits/stdc++.h>
using namespace std;

// วิธีที่ 1: Template หลัก - Multiple test cases + getline
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

 int t;
 cin >> t;
 cin.ignore(); // ลบ newline หลัง cin >> t

 while (t--)
 {
  string line;
  getline(cin, line); // อ่านทั้งบรรทัด
  stringstream ss(line);

  int num, minVal = INT_MAX, maxVal = INT_MIN;
  while (ss >> num)
  { // แยกตัวเลขจาก stringstream
   minVal = min(minVal, num);
   maxVal = max(maxVal, num);
  }

  cout << minVal << " " << maxVal << "\n";
 }
}

// วิธีที่ 2: อ่านจนหมดไฟล์ - Real-time min/max
int main1()
{
 int num, minVal = INT_MAX, maxVal = INT_MIN;

 while (cin >> num)
 { // อ่านจนกว่า EOF
  minVal = min(minVal, num);
  maxVal = max(maxVal, num);
 }

 cout << minVal << " " << maxVal << "\n";
}

// วิธีที่ 3: อ่านจนเจอ delimiter (#)
int main2()
{
 string token;
 vector<int> v;

 while (cin >> token && token != "#")
 { // อ่านจนเจอ "#"
  v.push_back(stoi(token));
 }

 auto [minVal, maxVal] = minmax_element(v.begin(), v.end());
 cout << *minVal << " " << *maxVal << "\n";
}

// วิธีที่ 4: ใช้ istringstream แทน stringstream
int main3()
{
 int t;
 cin >> t;
 cin.ignore();

 while (t--)
 {
  string line;
  getline(cin, line);
  istringstream iss(line); // ใช้ istringstream

  vector<int> v;
  int num;
  while (iss >> num)
  {
   v.push_back(num);
  }

  cout << *min_element(v.begin(), v.end()) << " "
       << *max_element(v.begin(), v.end()) << "\n";
 }
}

// วิธีที่ 5: Single line input + sort
int main4()
{
 string line;
 getline(cin, line);
 stringstream ss(line);

 vector<int> v;
 int x;
 while (ss >> x)
  v.push_back(x);

 sort(v.begin(), v.end()); // เรียงแล้วเอาหัวท้าย
 cout << v[0] << " " << v.back() << "\n";
}

// วิธีที่ 6: ใช้ minmax_element
int main5()
{
 string line;
 getline(cin, line);
 stringstream ss(line);

 vector<int> nums;
 int num;
 while (ss >> num)
  nums.push_back(num);

 auto result = minmax_element(nums.begin(), nums.end());
 cout << *result.first << " " << *result.second << "\n";
}

// วิธีที่ 7: อ่านจำนวนที่กำหนด (n ตัว)
int main6()
{
 int n;
 cin >> n;

 int minVal = INT_MAX, maxVal = INT_MIN;
 for (int i = 0; i < n; i++)
 {
  int num;
  cin >> num;
  minVal = min(minVal, num);
  maxVal = max(maxVal, num);
 }

 cout << minVal << " " << maxVal << "\n";
}

// วิธีที่ 8: ใช้ set (auto sort)
int main7()
{
 string line;
 getline(cin, line);
 stringstream ss(line);

 set<int> s;
 int num;
 while (ss >> num)
 {
  s.insert(num);
 }

 cout << *s.begin() << " " << *s.rbegin() << "\n";
}

// วิธีที่ 9: ใช้ priority_queue หา min/max
int main8()
{
 string line;
 getline(cin, line);
 stringstream ss(line);

 priority_queue<int> maxHeap;                            // max heap
 priority_queue<int, vector<int>, greater<int>> minHeap; // min heap

 int num;
 while (ss >> num)
 {
  maxHeap.push(num);
  minHeap.push(num);
 }

 cout << minHeap.top() << " " << maxHeap.top() << "\n";
}

// วิธีที่ 10: Template ที่สั้นที่สุด
int main9()
{
 ios::sync_with_stdio(0);
 cin.tie(0);

 string s;
 getline(cin, s);
 stringstream ss(s);

 vector<int> v;
 int x;
 while (ss >> x)
  v.push_back(x);

 auto [mi, ma] = minmax_element(v.begin(), v.end());
 cout << *mi << " " << *ma << "\n";
}

#include <bits/stdc++.h>
using namespace std;
int main(){
      int sum;
      int a, b;
      cin >> a >> b;
      for (int i = a; i <= b; i++) {
          sum += i;
      }
      cout << sum;
}