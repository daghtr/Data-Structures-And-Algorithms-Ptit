// so buoc it nhat

#include<bits/stdc++.h>
using namespace std;

int n, a[2000];
void so_buoc_min()
{
	int b = 0;
	for(int i = 1 ; i <= n ; i++)
			cin >> a[i];
		
		int c[2000] = {0};	// cac gia tri trong mang  ban dau = 0
	
		for(int i = 1 ; i <= n ; i++)
		{
			c[i] = 1;
			for(int j = 1 ; j < i ; j++)
				if(a[i] >= a[j])
					c[i] = max(c[i] , c[j]+1);
			b = max(b, c[i]);
		}
	
		cout << n - b ;
		cout << endl;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		so_buoc_min();
		
	}
	return 0;
}

// done

