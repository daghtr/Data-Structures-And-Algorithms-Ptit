#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int i = 1 ; i <= n ; i++)		// tu 0 hoac 1 deu dc
			cin >> a[i];
		
		int count = 0;
		for(int i = 1 ; i <= n ; i++)		// tu 0 hoac 1 deu dc
		{
			if(a[i] == x)
				count++;
		}
		if(count != 0)
			cout << "1";
		else
			cout << "-1";
			
		cout << endl;
	}
	return 0;
}

//done
