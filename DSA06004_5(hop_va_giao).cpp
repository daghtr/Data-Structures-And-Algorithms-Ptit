#include<bits/stdc++.h>
using namespace std;

int n,m;

void hop_giao()
{
	long a[n+m];			//m+n hoac m+n+1;
	for(int i = 0 ; i < n+m ; i++)
		cin >> a[i];
	
	sort(a, a+n+m);
	
	
	
	for(int i = 0 ; i < n+m ; i++)
	{
		if(a[i] != a[i+1])
			cout << a[i] << " ";
	}
	cout << endl;
	
	
	for(int i = 0 ; i < n+m ; i++)
	{
		if( a[i]  ==  a[i+1])
			cout << a[i] << " ";
	}
	
	cout << endl;
}
int main()
{
	int t; 
	cin >> t;
	while(t--)
	{
		cin >> n >> m;
		hop_giao();
	}
	return 0;
}

//done
