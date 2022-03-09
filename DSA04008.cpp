#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9+7;
void mul_matrix(long long F[2][2], long long M[2][2])
{
	long long a = ((F[0][0] * M[0][0])%mod + (F[0][1] * M[1][0])%mod) % mod;
	long long b = ((F[0][0] * M[0][1])%mod + (F[0][1] * M[1][1])%mod) % mod;
	long long c = ((F[1][0] * M[0][0])%mod + (F[1][1] * M[1][0])%mod) % mod;
	long long d = ((F[1][0] * M[0][1])%mod + (F[1][1] * M[1][1])%mod) % mod;
	F[0][0] = a;
	F[0][1] = b;
	F[1][0] = c;
	F[1][1] = d;
}
void pow(long long F[2][2], long long n)
{
	if (n == 0 || n == 1) return;
	long long M[2][2] = {{1,1}, {1,0}};
	pow(F, n/2);
	mul_matrix(F, F);
	if (n % 2 != 0)
        mul_matrix(F,M);
}
long long fibo(long long n)
{
	if (n == 0)
        return 0;

	long long F[2][2] = {{1,1}, {1,0}};
	pow(F, n-1);
	return F[0][0];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    	long long n;
    	cin >> n;
    	cout << fibo(n) << endl;
	}
    return 0;
}

//chua sub