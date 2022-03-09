// day xau fibo

#include<bits/stdc++.h>
using namespace std;

long long F[100];

void xau()
{
	long long i,n;
	cin >> n >> i;
	while(n > 2)
	{
		if(i <= F[n-2])
			n -= 2;
		else
		{
			i -= F[n-2];
			n -= 1;
		}
	}
	
	if(n == 1)
		cout << "A";
	else
		cout << "B";
		
	cout << endl;
}

int main()
{
	
	
	F[1] = F[2] = 1;
	for(int i = 3 ; i <= 100 ; i++)
	{
		F[i] = F[i-1] + F[i-2];
	}
	int t;
	cin >> t;
	while(t--)
	{
		xau();
	}
	return 0;
}

//done
