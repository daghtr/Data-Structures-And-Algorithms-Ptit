#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	int n = 10;
	int t;
	cin >> t;
	while(t--)
	{
		int m, kq = 0;
		cin >> m;			// so tien co menh gia la m
		
		for(int i = n-1 ; i >= 0 ; i--)	// xet tu so tien co menh gia to nhat
		{
			kq = kq + m / a[i];		// m/a[i] la so to tien lon nhat k co the doi
			m = m % a[i];			// so tien con lai(phan du) sau khi doi toi da so to tien co san trong mang
		} 
		
		
		cout << kq;
		cout << endl;
	}
	
	return 0;
}

// done
//long long hoac int 


// sap xep mang giam gian thi for chay tu i = 0 -> i < n
