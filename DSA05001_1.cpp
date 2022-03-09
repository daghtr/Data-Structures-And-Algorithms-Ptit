#include<bits/stdc++.h>
using namespace std;

int xau_con_chung(string s1, string s2)
{
	int m = s1.size();
	int n = s2.size();
	int a[m+1][n+1];
	for(int i = 0 ; i <= m ; i++)
	{
		for(int j = 0 ; j <= n ; j++)
		{
			if(i == 0 || j == 0)
				a[i][j] = 0;
			else if(s1[i - 1] == s2[j - 1])
				a[i][j] = 1 + a[i - 1][j - 1];
			else if(s1[i - 1] != s2[j - 1])
				a[i][j] = max(a[i - 1][j], a[i][j - 1]);
		}
	}
	return a[m][n];
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s1, s2;
		cin >> s1 >> s2;
		cout << xau_con_chung(s1, s2) << endl;
	}
	return 0;
}

//done
