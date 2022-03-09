#include<bits/stdc++.h>
using namespace std;

int ch = 1; // dieu khien vong lap while

void in(int n, int a[])
{
	//chay den va in den n
	//in ket qua
	for(int  i = 1; i <= n; i++)
		cout << a[i];
	cout << " ";
}
void sinh_hoan_vi(int n, int a[])
{
	int i = n-1;	// duyet tu cuoi lai	
	
	while(i > 0  && a[i] > a[i+1])	
		i--;
	if(i > 0) 
	{
		int k = n;
		while(a[k] < a[i])
			k--;
		swap(a[k], a[i]);
		int p = i+1;
		int q = n;
		while(p < q)
		{
			swap(a[p], a[q]);
			p++;
			q--;
		}
	}
	else // nguoc lai khi tim thay thi ket thuc tim
	{
		ch = 0;		// khi da tim thay hoan vi cuoi cung
	}
	
}
int main()
{
	
	int t;
	cin >> t;
	while(t--)
	{
		int n,a[100];
		cin >> n;
		
		// khoi tao cau hinh dau tien
		for(int i = 1 ; i <= n ; i++)
			a[i] = i; //a tai vi tri i = i
		while(ch)		// lap in cho den to hop cuoi cung
		{
			in(n,a);
			sinh_hoan_vi(n,a); // tim hoan vitiep theo
			// bien ch = 1 thi van chay de tim to hop cho den khi bien ch = 0 thi dung lai
		}
		ch = 1;
		cout << endl;
	}
	return 0;
}

//done
