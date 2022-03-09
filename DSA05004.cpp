#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[1000], b[1000] = {0}, c;		//cac phan tu trong mang b = 0
	c = 0;
	
	for(int i = 1 ; i <= n ; i++)	// nhap mang a
		cin >> a[i];
		
	for(int i = 1 ; i <= n ; i++)	
	{
		b[i] = 1;			// do dai moi day con = 1 tai chinh no	// giong nhu 1 bien dem de so sanh
		for(int j = 1 ; j < i ; j++)	// xet day con tu 1 den i
		{
			if(a[i] > a[j])			// a[i] co the chen day con co do dai la j
				b[i] = max(b[i], b[j] + 1);		// day dan cac phan tu vao xong so sanh neu phu hop thi chon
												// VD : 1 la phan tu dau tien co do dai 1 dc day vao mang a[j] 
														// => day con j hien tai dang co dai la 1
														// => chen tiep 2 vao hop ly => chon tang do dai day con j len 2
														// .....
														// xet cho den khi het mang a[i]
		}	
		c = max(c, b[i]);		// gan voi 1 gia tri nho nhat de in ra max cua day con b[j]
	}
	
	cout << c;	// in ra do dai
	
	return 0;
}

//done
