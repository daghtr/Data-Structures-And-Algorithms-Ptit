#include<bits/stdc++.h>
using namespace std;

int  n,m, a[100];

void thuan_nghich(int k)
{
	if(k > ((n+1) / 2))
	{
		for(int j = 1 ; j <= (n+1)/2 ; j++ )
			cout << a[j] << " ";
		for(int j = m ; j >= 1 ; j--)	
			cout << a[j] << " ";
		cout << endl;
		return;
	}
	for(int i = 0 ; i <= 1 ; i++)
	{
		a[k] = i;
		thuan_nghich(k+1);
	}
}
int main()
{

	cin >> n;
	m = (n % 2) ? ((n-1)/2) : (n/2);
	thuan_nghich(1);
	return 0;
	
}

//done
