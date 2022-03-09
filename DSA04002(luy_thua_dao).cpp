#include<bits/stdc++.h>
using namespace std;

long long modulo = 1e9 + 7;

// tinh n^r
long long pow(long long n, long long r)
{
    if(r == 0)
        return 1;
        
    // tinh luy thua tren mot nua
    long long a = pow(n, r/2);
    
    if(r % 2 == 0)
        return a * a % modulo;
    return n * (a * a % modulo ) % modulo;
}

main()
{
	int t;;
	cin >> t;
	while(t--)
	{
	    long long n, r;
	    r = 0;
		cin >> n;
		long long m = n;
		// thuc hien dao nguoc so n --> thu duoc r
 		while(m > 0)
		{
			r = r * 10 + m % 10;
			m = m / 10;
		}
		long long k = pow(n,r);
		cout << k % modulo << endl;
	}
	
	return 0;
}

//done
