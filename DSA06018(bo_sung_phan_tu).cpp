#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,m;
		cin >> n;
		m = n;
		vector<int> a(n);
		
		for(int i = 0 ; i < n ; i++)
			cin >> a[i];
		
		sort(a.begin(), a.end());
		
		for(int i = 0 ; i < n ; i++)
		{
			if(a[i] == a[i+1])
				m--;
		}
		
		int b;
		b = a[n-1] - a[0] - m + 1; // vtri cuoi tru vi tri dau + 1, m phan tu k trung nhau
		
		cout << b ;
		cout << endl;
	}
	return 0;
}

//done
