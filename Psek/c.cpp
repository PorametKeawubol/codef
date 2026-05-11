#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    // แปลงตัวเลขเป็น string
    string numStr = to_string(num);
    
    // เรียงลำดับจากมากไปน้อย
    num.erase(remove(num.begin(), num.end(), '0'), num.end());
        sort(num.begin(), num.end());
    sort(numStr.begin(), numStr.end(), greater<char>());


    cout << stoi(numStr) << endl;

    return 0;
}