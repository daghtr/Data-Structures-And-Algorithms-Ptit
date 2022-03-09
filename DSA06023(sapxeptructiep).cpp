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
		for(int j = i+1 ; j < n ; j++)
		{
			if(a[i] > a[j])
			{
				a[i] = a[i] + a[j];
				a[j] = a[i] - a[j];
				a[i] = a[i] - a[j];
			}
				
		}
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
