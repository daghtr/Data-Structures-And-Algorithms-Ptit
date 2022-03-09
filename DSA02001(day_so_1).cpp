#include<bits/stdc++.h>
using namespace std;

void day_so_1()
{
	int n;
	cin >> n;
	int a[100][100];
	for(int j = 1 ; j <= n ; j++)
		cin >> a[1][j];
	
	int c = n-1;
	
	for(int i = 2 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= c ; j++)
			a[i][j] = a[i-1][j] + a[i-1][j+1];
			c--;
	}
	
	c = n;
	for(int i = 1 ; i <= n ;i++)
	{
		cout << "[";
		for(int j = 1 ; j < c ; j++)
			cout << a[i][j] << " ";
		cout << a[i][c] << "]";
		c--;
		cout << endl;
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		day_so_1();
	}
	return 0;
}


// done
