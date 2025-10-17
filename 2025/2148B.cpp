#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--){
		int n,m,x,y;
		
		cin >> n >> m >> x >> y;

		vector<int> nn(n);

		vector<int> mm(m);
		for (auto& x : nn){
			cin >> x;
		}

		for (auto& x : mm ){
			cin >> x;	
		}
		cout << min((n+1), (m+1)) << "\n";

	}

}

