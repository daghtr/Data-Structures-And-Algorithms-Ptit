#include<bits/stdc++.h>
using namespace std;

void tapcon_kt()
{
	int n, k;
	cin >> n >> k;
	int b[k+1];
	
	// nhap
	for(int i = 1; i <= k ; i++)
	{
		cin >> b[i];
	}
	
	// xet de tim phan tu chua dat den gioi han / n-k+i
	int i = k;
	while(i > 0 && b[i] == n-k+i)
		i--;
		
	// 	neu la tap con cuoi cung
	if(i <= 0 )
	{
		for(int i = 1; i <= k; i++)
			b[i] = i;
	}
	
	// khi chua la tap con cuoi cung
	else
	{
		b[i] = b[i] + 1;	// tang phan tu gioi han len 1
		
		// gan tat ca phan tu chay tu i+1 -> k bang so dung trc +1
		for(int j = i+1; j <= k; j++)
			b[j] = b[j-1] + 1;
	}
	//in ra kq
	for(int i = 1; i <= k; i++)
		cout << b[i] << " ";
		cout << endl;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		tapcon_kt();
		
	}
	return 0;
}

//done
