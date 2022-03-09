#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int m, n;
		cin >> m >> n;
		int a[100][100];
		int b[100][100];
		
		// cho cac phan tu cua 2 mang tro ve 0 het
		/* for(int i = 0 ; i <= m ; i++)		// trong quy hoach dong thuong quy uoc la dp  // b = dp
		{
			for(int j = 0 ; j <= n ; j++)
				a[i][j] = b[i][j] = 0;
				
		} */
		
		for(int i = 1 ; i <= m ; i++)
		{
			for(int j = 1 ; j <= n ; j++)
				cin >> a[i][j];
				
		}
		
		b[1][1] = 1;			//cho vi tri dau tien = 1 de bat dau di chuyen
		for(int i = 1 ; i <= m ; i++)
		{
			for(int j = 1 ; j <= n ; j++)
			{
				if(i == 1  &&  j == 1)		// de tiep tuc di chuyen
					continue;				
				b[i][j] = b[i-1][j] + b[i][j-1];		// chi di chuyen xuong va sang phai
			}
		}
		
		cout << b[m][n];
		cout << endl;
		
	}
	return 0;
}

//done
