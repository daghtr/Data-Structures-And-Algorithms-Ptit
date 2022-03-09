#include <bits/stdc++.h>
using namespace std;


void xu_li_va_in_ra(int n)
{
	int b[100];
	int i = 0;
	
	//chuyen doi tu he 10 sang he 2(nhi phan)
	while (n > 0)
	{
		b[i] = n % 2;
		n /= 2;						
		i++;
	}
	
	// in ra so nhi phan
	for (int j = i-1 ; j >= 0 ; j--)
		cout << b[j];
	cout << " ";

}

void chay(int n)
{
	//vong lap de chay tu 1 -> n
	for(int i = 1 ; i <= n ; i++)
	{
		xu_li_va_in_ra(i);
	}
}
int main()
{
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		chay(n);
		cout << endl;
	}
	return 0;
}

//done
