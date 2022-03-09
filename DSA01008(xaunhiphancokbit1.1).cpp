#include<bits/stdc++.h>
using namespace std;

int n,k,a[100];

void xau_nhi_phan(int i)
{
	for(int j = 0 ; j <=1 ; j++)
	{
		 a[i] = j;
		if(i == n)
		{
			int d=0;
			for(int p = 1 ; p <=n ; p++)
				if(a[p] == 1)
					d = d +1;
			if(d == k)
			{
				for(int p = 1 ; p <= n ;p++)
					cout << a[p];
					cout << endl;
			}
		}
		else
			xau_nhi_phan(i+1);
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		xau_nhi_phan(1);
	}
	return 0;
}

//done
