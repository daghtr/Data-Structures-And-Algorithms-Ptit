#include<bits/stdc++.h>
using namespace std;


int a[100], n;

bool check()
{
	int s = 0;
	for(int  i = 0 ; i < n ; i++)
		s += a[i];
		
	if(s % 2 != 0)
		return false;
		
	bool p[s/2 + 1][n+1];
	
	for(int i = 0 ; i <= n ;i++)	// <=>	for(int i = 0 ; i < n ;i++)
		p[0][i] = true;
		
	for(int i = 1 ; i <= s/2 ; i++)
		p[i][0] = false;
		
	for(int i = 1 ; i <= s/2 ; i++)
	{
		for(int j = 1 ; j <= n ; j++)
		{
			p[i][j] = p[i][j-1];
			if(i >= a[j-1])
				p[i][j] = p[i][j] || p[i-a[j-1]][j-1];
		}
	}
	return p[s/2][n];
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		for(int i = 0 ; i < n ; i++)
			cin >> a[i];
			
		if(check() == true)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}

//done
