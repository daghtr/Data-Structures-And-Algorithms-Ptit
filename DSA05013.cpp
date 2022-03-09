#include<bits/stdc++.h>
using namespace std;

long long mod = 1e9+7;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		
		//a[n] la mang chua so cach buoc den bac n
		long long a[n+5] = {0};
		
		a[0] = a[1] = 1;	// so cach buoc den bac 0 va 1
		for(int i = 2 ; i <= n ; i++)			// so cach buoc len cac bac nho hon bac n
		{
			for(int j = 1 ; j <= min(i,k) ; j++)	// min(i,k) vi nho hon k thi chi can buoc 1 buoc la da len den bac n
			{
				a[i] = a[i] + a[i-j];			// a[i] so cach buoc den bac thu i
				a[i] = a[i] % mod;
			}
		}
		
		cout << a[n];		
		cout << endl;
	}
	
	return 0;
}

//done
