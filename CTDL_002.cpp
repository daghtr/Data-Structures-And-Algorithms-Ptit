#include<bits/stdc++.h>
using namespace std;

int check = 0, amount;	// <=> amount = 0
void sinh(int a[], int b[], int c[], int n, int k)
{
	int i = n;
	while(i > 0  &&  b[i] == 1)
	{
		b[i] = 0;
		i--;
	}
	
	if(i == 0)
		check = 1;
	else
	{
		b[i] = 1;
	}
	
	int sum = 0;
	for(int i = 1 ; i <= n ; i++)
	{
		if(b[i])
			sum += a[i];
	}
	
	int m = 1;
	if(sum == k)
	{
		amount++;
		for(int i = 1 ; i <= n ; i++)
		{
			if(b[i])
				c[m++] = a[i];
		}
		
		for(int i = 1 ; i < m ; i++)
			cout << c[i] << " ";
		cout << endl;
	}
}


int main()
{
	int n, k;
	cin >> n >> k;
	int a[n], b[n], c[n];
		
	for(int i = 1 ; i <= n ; i++)
		cin >> a[i];
		
	for(int i = 1 ; i <= n ; i++)
		b[i] = 0;
		
	while(!check)
	{
		sinh(a,b,c,n,k);
	}
	
	cout << amount;
	return 0;
}

//done
