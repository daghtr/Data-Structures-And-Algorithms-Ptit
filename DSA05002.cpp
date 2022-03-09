#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		int n;
		cin >> n;
		cin >> s;
		int a[n+5][n+5];
		memset(a, 0, sizeof a);  // gan cho tat ca vi tri = 0
		for(int i = 1 ; i <= n ; i++)
		{
			for(int j = 1 ; j <= n ; j++)
			{
				if(s[i-1] == s[j-1]  &  i != j)		// xet lap lai ky tu
					a[i][j] = 1 + a[i-1][j-1];
				else
					a[i][j] = max(a[i][j-1], a[i-1][j]);
			}
		}
		cout << a[n][n];
		cout << endl;
	}
	return 0;
}

//done
