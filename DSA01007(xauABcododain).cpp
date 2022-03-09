#include<bits/stdc++.h>
using namespace std; 

int ch = 1;

void in(int n, char a[])
{
	for(int i = 1 ; i <= n ; i++)
		cout  <<  a[i] ; 
	cout << " ";
}

void xau_ky_tu(int n,  char a[] )
{
	int i = n;
	while( i > 0 && a[i] != 'A' )
	{
		a[i] = 'A';
		i--;
	}
	if(i > 0)
	{
		a[i] = 'B';
	}
	else
	{
		ch = 0;
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		char a[100];
		for(int i = 1 ; i <= n ; i++)
			a[i] = 'A';
		while(ch)
		{
			in(n,a);
			xau_ky_tu(n,a);
		}
		ch = 1;
		cout << endl;
	}
	return 0;
}

//done
