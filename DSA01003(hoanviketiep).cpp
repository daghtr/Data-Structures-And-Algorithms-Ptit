#include<bits/stdc++.h>
using namespace std;

void hoanvi()
{
	int n;
	cin >> n;
	int a[1000];
	
	//nhap
	for(int i = 1; i <= n; i++)
		cin >> a[i];
		
	int i = n-1;	// chay tu n-1 -> 1
	
	//tim vi tri i sao cho a[i] < a[i+1]
	while(i > 0  &&  a[i] > a[i+1])
		i--;
	
	
	if(i <= 0)	//neu la hoan vi cuoi cung
	{
		for(int i = 1; i <=n; i++)
			cout << i << " ";
			cout << endl;
	}
	else		// chua phai hoan vi cuoi cung
	{
		int k = n;
		while(a[k] < a[i])
			k--;
			swap(a[k] , a[i]);
		int m = i+1, p = n;
		while(m < p)
		{
			swap(a[m], a[p]);
			m++;
			p--;
		}
		for(int i = 1; i <= n ; i++)
			cout << a[i] << " ";
			cout<<endl;
	}
	
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		hoanvi();
	}
	return 0;
}

//done
