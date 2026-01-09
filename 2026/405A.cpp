#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> flipg(n);
	for (int i = 0 ; i < n ; i++){
		cin >> flipg[i];
	}
	sort(flipg.begin(),flipg.end());
	for ( int j = 0; j < n-1 ; j++){
		cout << flipg[j] << " ";
	}
	cout << flipg[n-1];
}


