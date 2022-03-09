#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n)
{
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];
}

void in(int a[], int n)
{
	for(int i = 0 ; i < n ; i++)
	{
		cout << a[i] << " ";
		
	}
	cout<<"\n";
}

void sapxep(int a[], int n)
{
	for(int i = 0 ; i < n-1 ; i++)
	{
		int ktra = 1;
		for(int j = 0 ; j < n-i-1 ; j++)
		
			if(a[j] > a[j+1])
			{
				ktra = 0;
				a[j]   = a[j] + a[j+1];
				a[j+1] = a[j] - a[j+1];
				a[j]   = a[j] - a[j+1];
			}
			if(ktra == 1)
				break;
		
		
		printf("Buoc %d: ", i+1);
		in(a,n);
	}
}


int main()
{
	int a[100], n;
	cin >> n;
	nhap(a,n);
	sapxep(a,n);
	return 0;
}

//done
