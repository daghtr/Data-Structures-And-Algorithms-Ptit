#include<bits/stdc++.h>
using namespace std;



int day_so(long n, long k)
{
	if(k % 2 == 1)
		return 1;
		
	long m = pow(2, n-1);
	
	if(k == m)
		return n;
	else if(k < m)
		return day_so(n-1, k);
	else
		return day_so(n-1, k-m);
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long n, k;
		cin >> n >> k;
		
		cout << day_so(n,k);
		cout << endl;
	}
	
	return 0;
}

//done
