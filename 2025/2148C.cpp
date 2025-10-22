#include <bits/stdc++.h>
using namespace std;
int main(){	
	int t;
	cin >> t;
	while(t--)
	{
		int n,m;
		//vector a(n)
		cin >> n >> m;
		int curx = 0,cury = 0,ans = 0;
		while(n--)
		{
			int x,y;
			cin >> x >> y;
			int diff = x - curx;
			ans+=diff;
			if ((diff % 2) != (cury ^ y)) ans--;
			curx = x;
			cury = y;

		}
		ans += m - curx;
		cout << ans << "\n";
	}
	
}


