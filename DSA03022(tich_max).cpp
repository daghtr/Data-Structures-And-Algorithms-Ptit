#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	
	
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];
		
	sort(a,a+n); // sap xep tang dan tu 1 den n;
	
	long b = a[0] * a[1];
	long c = a[0] * a[1] * a[2];		//truong hop so am
	long d = a[0] * a[1] * a[n-1];
	long e = a[n-1] * a[n-2];
	long f = a[n-1] * a[n-2] * a[n-3];
	long g = max(c,d);
	long tich = max(max(b,g), max(e, f));
	
	cout << tich;
	return 0;
}

// done
