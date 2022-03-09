// tinh P(n,k)

#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n,k;
		cin >> n >> k;
		
		long long a = 1;
		if(k > n )
			a = 0;
		for(int i = n-k+1 ; i <= n ; i++)
			a = (a * i) % mod;
			
		cout << a;
		cout << endl;
	}
	return 0;
}

//done
