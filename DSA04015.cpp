#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n, x; 
		
		int count = -1;
		cin >> n >> x;
		vector<long long> a(n+1);
		
		for(int  i = 1 ; i <= n ; i++)
		{
			cin >> a[i];
			
			if(a[i] <= x)
				count = i;
			
		}
		cout << count;
		cout << endl;
	}
	return 0;
}

//done
