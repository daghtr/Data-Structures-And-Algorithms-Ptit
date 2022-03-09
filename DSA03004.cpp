#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n];
		long long sum_1 = 0, sum_2 = 0;
		
		for(int i = 0 ; i < n ; i++)
			cin >> a[i];
			
		sort(a, a+n);
		for(int i = 0 ; i < n ; i++)
		{
			if(i&1)
				sum_1 = (sum_1 * 10) + a[i];
			else
				sum_2 = (sum_2 * 10) + a[i];
		}
		cout << sum_1 + sum_2 << endl;
	}
	
	return 0;
}

//done
