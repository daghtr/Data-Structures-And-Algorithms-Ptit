#include<bits/stdc++.h>
using namespace std;

vector<bool> prime(1000001, true);
void sieve_prime()
{
	prime[0] = prime[1] = false;
	for(int i = 2 ; i <= 1000 ; i++)
	{
		if(prime[i])
		{
			for(int j = i*i ; j <= 1000000 ; j += i)
				prime[j] = false;
		}
	}
}



int main()
{
	int t;
	cin >> t;
	sieve_prime();
	while(t--)
	{	
		int n, i;
		cin >> n;
		for(i = 2 ; i <= n/2 ; i++)
		{
			if(prime[i] && prime[n-i])
			{
				cout << i << " " << n-i;
				break;

			}
		}
		if(i > n/2)
			cout << "-1";
		cout << endl;
	}
	return 0;
}

//done