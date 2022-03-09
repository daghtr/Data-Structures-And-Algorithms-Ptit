#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int i = 0 ; i < n ; i++)
			cin >> a[i];
			
		// binary_search : thuat toan tim kiem nhi phan
		if(binary_search(a, a+n, x))		// tim kiem x trong khoang tu dau den cuoi mang a co n phan tu
			cout << "1";
		else
			cout << "-1";
			
		cout << endl;
	}
	
	
	return 0;
}
