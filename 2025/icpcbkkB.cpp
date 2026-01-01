#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int T;
	cin >> T;
	while(T--){
	long long N,M;
	cin >> N >> M;
	long long toto = M % N;
	if (!toto)
	{
		for (int i = 1;i<=int(N);i++){
			cout << i << (i==N ? '\n' : ' ');
		}
	}

	else {
		for (long long i = 0;i<toto;i++){
			long long Na = N-i;
			cout << Na << ' ';
		}
		for(long long i = 1;i<=N-toto;i++){
			cout << i << (i == (N-toto) ? '\n' : ' ');
		}
	}
	}

}	

