#include<bits/stdc++.h>
using namespace std;

void day_so_1(int n)
{
	int a[n][n];
	for(int i = 0 ; i < n ; i++)
		cin >> a[0][i];
		
	for(int i = 1 ; i < n ; i++)
	{
		for(int j = 0 ; j < n-i ; j++)
			a[i][j] = a[i-1][j] + a[i-1][j+1];
	}
	
	for(int i = 0 ; i < n ; i++)
	{
		cout << "[";
		for(int j = 0 ; j < n-i-1 ; j++)
		{
				cout << a[i][j] << " ";
		}
			cout << a[i][n-i-1] << "]";
			cout << endl;
	}
	cout << endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		day_so_1(n);
	}
	return 0;
}

//done
