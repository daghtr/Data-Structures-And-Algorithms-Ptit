#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin >> n;
	int c, d, a[n], b[n], x=0, y=0;
	
	for(int i=1 ; i<=n ; i++)
	{
		cin >> c;
		if(i % 2 == 0 )
		{
			a[x] = c;
			x++;		// vi tri chan
		}		
		else
		{
			b[y] = c;
			y++;		// vi tri le
		}
	}
	
	sort(a,a+x);
	sort(b,b+y);
	
	d = 0;
	x--;
	
	for(int i = 0 ; i < n ; i++)
	{
		if(i % 2 == 0)
		{
			cout << b[d] << " ";
			d++;
		}
		else
		{
			cout << a[x] << " ";
			x--;
		}
	}
	
	
	return 0;
	
}

//done
