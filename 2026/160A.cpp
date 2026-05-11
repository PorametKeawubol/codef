#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin >> x;
	vector<int> met(x);
	for (int i = 0;i<x;i++){
		cin >> met[i];
	}
	sort(met.rbegin(), met.rend());
	int total = accumulate(met.begin(),met.end(),0);
	int me = 0,ans = 0;
	for (int metjr : met){
		me+=metjr;
		ans++;
		if(me > total - me){
			break;
		}
	}
	cout << ans << endl;
}


