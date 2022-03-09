#include<bits/stdc++.h>
using namespace std;

int a[105][25005];
int main()
{
	int c, n;
	cin >> c >> n;
	int w[n];
	for(int i = 1 ; i <= n ; i++)
		cin >> w[i];
	
	memset(a, 0, sizeof a);
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= c ; j++)
		{
			if(j >= w[i])
				a[i][j] = max(a[i-1][j], a[i-1][j-w[i]] + w[i]);
			else
				a[i][j] = a[i-1][j];
		}	
	}
	cout << a[n][c];
	return 0;
}

//done
