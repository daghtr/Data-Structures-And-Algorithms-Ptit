#include<bits/stdc++.h>
using namespace std;

// ham tra ve so luong cap voi x la phan tu cua cap
// tim cac phan tu trong Y sao cho x^Y > Y^x
int count(int x, int Y[], int n, int a[])
{
	// neu x=0 k co gtri trong Y thoa man
	if(x == 0)
		return 0;
		
	// neu x=1 thi Y = 0
	if(x == 1)
		return a[0];
		
	// tim phan tu trong Y[] lon hon x su dung ham upper_bound()
	int* idx = upper_bound(Y, Y+n, x);	// duyet tu dau den cuoi mang Y tim phan tu dau tien lon hon x
	int answer = (Y + n) - idx;
	
	// x>1 thi y=0 va y=1
	answer = answer + (a[0] + a[1]);
	
	// x=2 thi y=3 hoac y=4
	if(x == 2)
		answer = answer - (a[3] + a[4]);
	
	// x=3 thi y=2
	if(x == 3)
		answer = answer + a[2];
		
	return answer;
}


// ham tra ve cac cap (x,y) sao cho x^y > y^x
int so_cap(int X[], int Y[], int n, int m)
{
	int a[10] = {0};		// de luu tru so luong 0,1,2,3,.... trong mang Y
	for(int i = 0 ; i < m ; i++)
	{
		if(Y[i] < 10)
			a[Y[i]]++;
	}
	
	sort(Y, Y+m);
	
	int b = 0;	// khai bao 1 bien de luu kq
	
	//lay cac phan tu trog X va dem 
	for(int i = 0 ; i < n ; i++)
		b = b + count(X[i], Y, m, a);
		
	return b;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, m;
		cin >> n >> m;
		int X[n], Y[m];
		for(int i = 0 ; i < n ; i++)
			cin >> X[i];
		for(int i = 0 ; i < m ; i++)
			cin >> Y[i];
			
		cout << so_cap(X, Y, n, m);
		cout << endl;
	
	}
	return 0;
}

//done
