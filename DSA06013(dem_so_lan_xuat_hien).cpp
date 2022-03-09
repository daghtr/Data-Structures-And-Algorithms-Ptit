#include<bits/stdc++.h>
using namespace std;


int n,x,a[1000];

void nhap()
{
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];
}

void dem()
{
	int count = 0;
	for(int i = 0 ; i < n ; i++)
	{
		if(a[i] == x)
			count++;
	}
	if(count != 0)
	{
		cout << count;
		//cout << endl;
	
	}

	else
	{
		cout << "-1";
		//cout << endl;
	} 
	cout << endl;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> x;
		nhap();
		dem();
	}
	return 0;
}

// done
