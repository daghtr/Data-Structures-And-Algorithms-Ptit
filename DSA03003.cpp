#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9+7;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		long long a[n];
		long long sum = 0;
		for(int i = 0 ; i < n ; i++)
			cin >> a[i];
			
		sort(a, a+n);
		
		
		for(int i = 0 ; i < n ; i++)
		{
			sum = sum + (a[i] * i);
			sum = sum % mod;
		}
		
		cout << sum;
		cout << endl;
	}
	return 0;
}

// done
