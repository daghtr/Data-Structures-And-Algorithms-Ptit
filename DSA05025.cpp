#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a[50];
	a[1] = 1;				// chi co 1 cach nhay den bac 1
	a[2] = 2;				// chi co 2 cach nhay den bac 2
	a[3] = 4;				// chi co 4 cach nhay den bac 3

	for(int i = 4 ; i <= 50 ; i++)		// xet so cach tu bac tu 4 tro di
		a[i] = a[i-1] + a[i-2] + a[i-3];
		// a[i-1] tu vi tri i-1 nhay 1 buoc den bac thu a[i]
		// a[i-2] tu vi tri i-2 nhay 1 buoc den bac thu a[i]
		// a[i-3] tu vi tri i-3 nhay 1 buoc den bac thu a[i]
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << a[n];
		cout << endl;
	}
	
	return 0;
}

//done