// Mã Gray 1
// liêt kê mã Gray có do dai N

#include<bits/stdc++.h>
using namespace std;

int n;
void Gray()
{
	if(n <= 0)
		return;
		
	vector<string> a;
	
	// day 0,1 vao vi tri cuoi cung cua vector a
	a.push_back("0");
	a.push_back("1");
	
	for(int i = 2 ; i < (1 << n) ; i = i << 1)
	{
		for(int j = i-1 ; j >= 0 ; j--)
			a.push_back(a[j]);
			
		for(int j = 0 ; j < i ; j++)
			a[j] = "0" + a[j];
			
		for(int j = i ; j < 2*i ; j++)
			a[j] = "1" + a[j];
	}
	
	// size() tra ve so luong phan tu dang su dung trong vector
	// chay tu 0 den do de in ra 
	for(int i = 0 ; i < a.size() ; i++)		
		cout << a[i] << " ";
	cout << endl;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		Gray();
	}
	return 0;
}


// done
