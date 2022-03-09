#include<bits/stdc++.h>
using namespace std;

int maxc[1005][1005];	// the tich lon nhat khi chon den vat thu i va the tich toi da la j
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		
		int n, v;
		cin >> n >> v;
		// a[n] : the tich moi do vat
		// c[n] : the tich cua cai tui
		int a[n+5], c[n+5];
		for(int i = 1 ; i <= n ; i++)
			cin >> a[i];
		for(int i = 1 ; i <= n ; i++)
			cin >> c[i];
		
		memset(maxc, 0, sizeof maxc);	// khoi tao bo nho
		for(int i = 1 ; i <= n; i++)
		{
			for(int j = 1 ; j <= v ; j++)
			{
				maxc[i][j] = maxc[i-1][j];
				if(a[i] <= j  &&  (maxc[i-1][j-a[i]] + c[i] > maxc[i-1][j]))
					maxc[i][j] = maxc[i-1][j-a[i]] + c[i];
			}
		}
		
		cout << maxc[n][v] << endl;
	}
	return 0;
}

//done
