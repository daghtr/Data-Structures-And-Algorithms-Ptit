#include<bits/stdc++.h>
using namespace std;

int n;
void phan_tu_khac_nhau()
{
	vector<int> a(n), b(n-1);
	for(int i = 0 ; i < n ;i++)
		cin >> a[i];
	for(int i = 0 ; i < n-1 ; i++)
		cin >> b[i];
		
	int m = n-1;
	for(int i = 0 ; i < n-1 ; i++)
	{
		if(a[i] != b[i])
		{
			m = i;
			break;		
		}
	}
	cout << m+1;
	cout << endl;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		phan_tu_khac_nhau();
		
	}
	return 0;
}

//done
