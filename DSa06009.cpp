#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >>k;
		int a[n];
		for(int i = 0 ; i < n ; i++)
			cin >> a[i];
		
		int count = 0;	
		for(int i = 0 ; i < n ; i++)	// duyet tu phan tu dau
		{
			for(int j = i+1 ; j < n ; j++)	// duyet tu phan tu thu 2
			{
				
				if(a[i] + a[j] == k)		// neu = k tang bien dem len 1
					count++;
			}
		}
		cout << count;
		cout << endl;
	}
	
	return 0;
}

//done
