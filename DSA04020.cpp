#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		int a[n];		// a[10000]
		for(int i = 1 ; i <= n ; i++)
			cin >> a[i];
		
		int b = lower_bound(a+1, a+n+1, k) - a;	// lower_bound -> ham tim kiem nhi phan
												//a+1 : vi tri bat dau de tim kiem(vi tri dau tien)
												//a+n+1 : vi tri cuoi cung
												//k : so can tim
												// vi tra ve dia chi nen khi tim dc ket qua phai tru(-) di a dia chi cua mang a
		if(a[b] == k)
			cout << b;
		else
			cout << "NO";
		
		cout << endl;
	}
	return 0;
}

//done
