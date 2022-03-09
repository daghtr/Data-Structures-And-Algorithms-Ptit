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
		int a[n], b[n];		// cung so  phan tu
		for(int i = 0 ; i < n ; i++)
		{
			cin >> a[i];
			b[i] = a[i];
		}
		
		sort(a, a+n);
		
		int min = 0, max = 0;
		for(int i = 0 ; i < n ; i++)
		{
			if(a[i] != b[i])
			{
				min = i;
				break;
			}
		}
		
		for(int i = n-1 ; i >= 0 ; i--)
		{
			if(a[i] != b[i])
			{
				max = i;
				break;
			}
		}
		
		cout << min+1 << " " << max+1;
		cout << endl;
	}
	return 0;
}

//done
