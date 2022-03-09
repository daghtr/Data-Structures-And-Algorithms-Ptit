// liet ke cac chu so trong mang
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a[10] = {0};
		int n,b;
		cin >> n;
		for(int i = 0 ; i < n ; i++)
		{
			cin >> b;
			while(b)
			{
				a[b % 10] = 1;
				b /= 10;
			}
		}
		
		for(int  i = 0 ; i < 10 ; i++)
			if(a[i])
				cout << i << " ";
		cout <<endl;	
	}
	return 0;
}
//done
