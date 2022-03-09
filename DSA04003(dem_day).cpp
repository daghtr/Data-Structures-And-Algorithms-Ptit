#include<bits/stdc++.h>
using namespace std;


long long m = 123456789;
long long s(long long x)
{
	return x*x;
	
}

long long kq(long long n)
{
	if(n == 0)	
		return 1 % m;
	if(n == 1)
		return 2 % m;
	
	long long p = kq(n / 2);
	
	if(n % 2 == 0)
		return (p % m  *  p % m) % m;
		
	return 2 * (s(p) % m) % m;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		n = n - 1 ;
		cout << kq(n);
		cout << endl;
	}
	return 0;
}

// done
