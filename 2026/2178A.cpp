#include <bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin >> t;
 while (t--)
 {
		string s;
		cin >> s;
		int y = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == 'Y')
			{
				y++;
			}
		}
		cout << ((y <= 1) ? "YES" : "NO") << "\n";
 }
}
