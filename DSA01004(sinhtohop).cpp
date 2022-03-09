#include<bits/stdc++.h>
using namespace std;

int ch = 1;

void in(int k, int a[])
{
	//chay den chi can tim va in den k
	for(int  i = 1; i <= k; i++)
		cout << a[i];
	cout << " ";
}
void sinh_to_hop(int n, int k, int a[])
{
	int i = k;	
	// bat dau tu to hop hien tai
	// tim a[i] sao cho a[i] != n-k+i
	while(i > 0  && a[i] == n-k+i)	//tim vi tri cua to hop can update
		i--;
	if(i > 0) // cap nhat not cac phan tu sau chi so i cua to hop 
	{
		// tang gia tri trong mang day len 1 
		a[i]++;	// cap nhat a[i]
		for(int  j = i+1; j <=n ; j++)	// 1 2 5 => 1 3 4
										// 1 2 3 => 1 2 4
			a[j] = a[j-1] +1;	// cap nhat lai cac gia tri dung o dang sau cua bien i dung dau tien
	}
	else // nguoc lai khi tim thay thi ket thuc tim
	{
		ch = 0;		// khi da tim thay to hop cuoi cung
	}
	
}
int main()
{
	
	int t;
	cin >> t;
	while(t--)
	{
		int n,k,a[100];
		cin >> n >> k;
		
		// khoi tao cau hinh dau tien
		for(int i = 1 ; i <= n ; i++)
			a[i] = i; //a tai vi tri i = i
		while(ch)		// lap in cho den to hop cuoi cung
		{
			in(k,a);
			sinh_to_hop(n,k,a); // tim to hop tiep theo
			// bien ch = 1 thi van chay de tim to hop cho den khi bien ch = 0 thi dung lai
		}
		ch = 1;
		cout << endl;
	}
	return 0;
}

//done
