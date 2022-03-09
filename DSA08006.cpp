#include<bits/stdc++.h>
using namespace std;

string so_0_9(int n)
{
	queue<string> a;
	a.push("9");		// so dau tien k the nao  = 0 thi push dua vao so 9
	while(a.size() > 0)
	{
		string s;
		s = a.front();		// lay phan tu dau tien cua queue a gan vao s
		a.pop();
		
		int b = 0;
		for(int i = 0 ; i < s.size() ; i++)		// lay tung ky tu duyet tu dau
		{
			b = b * 10 + (int)(s[i] - '0');		// chia string cho int
												// s[i] se doi ra so nguyen de thuc hien chia du
		}
			b = b % n;							// thuc hien chia lay du
		
		if(b == 0)		// s chia het cho n
			return s;
			
		// neu k chia het them so 0 vao sau de duyet tiep
		a.push(s + "0");		// them so 0 trc vi so 0 them vao se be hon so 9 khi them vao
		a.push(s + "9");
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << so_0_9(n);
		cout << endl;
	}
	return 0;
}

//done
