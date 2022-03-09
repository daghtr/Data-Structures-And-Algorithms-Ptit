// phan tu thu k cua 2 mang sau khi tron va sap xep


#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int m,n,k;
	while(t--)
	{
		cin >> m >> n >> k;
		vector<int> a(m+n);
		for(int i = 0 ; i < m+n ; i++)
			cin >> a[i];
			
		sort(a.begin(), a.end());
		cout << a[k-1];
		cout << endl;
	}
	
	return 0;
}

//done
