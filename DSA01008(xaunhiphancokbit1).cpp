#include<bits/stdc++.h>
using namespace std;

int n,k,a[100];
void in()
{
	for(int i = 1 ; i <= n ; i++)
		cout <<a[i];
	cout << endl;
}

void xau_nhi_phan(int i)
{

	for(int j = 0 ; j <= 1 ; j++)
	{
		a[i] = j;
		k = k - j;
		if(i == n && k == 0)
			in();
		else if(i < n && k >= 0)
			xau_nhi_phan(i+1);
		
		k = k + j;
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		xau_nhi_phan(1);
	}
	return 0;
}

//done
