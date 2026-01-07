#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int x;
	string ans;
	for (int i = 1 ; i <= n;i++){
		if (i&1){
			ans+="I hate";
		}
		else{
			ans+="I love";
		}

		if (i!=n){
			ans+=" that ";
		}
		else {
			ans+=" it";
		}

	}
	cout << ans;
}

