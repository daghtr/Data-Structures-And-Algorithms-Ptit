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
	for(int i = 0 ; i < n ; i++)
	{
		int j, k;
		j = i - 1;
		k = a[i];
		while(a[j] > k && j >= 0)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = k;
		
		printf("Buoc %d: ", i);
		in(a,i+1);
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
