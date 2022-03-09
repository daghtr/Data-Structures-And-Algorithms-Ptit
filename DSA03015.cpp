#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		//n : so luong thuc mua dc nhieu nhat trong ngay
		//s : so luong ngay can su dung luong thuc de song
		//m : so luong thuc can co moi ngay de song
		int n, s, m;
		cin >> n >> s >> m;
		int k;
		if(n < m  ||  (n * 6) < (m * 7)  &&  s >= 7)
		{
			cout << "-1";
			cout << endl;
		}
		else
		{
			if((s * m) % n  != 0)
				k = ((s * m) / n) + 1;
			else
				k = (s * m) / n;
				
			cout << k;
			cout << endl; 
		}
		
	}
	return 0;
}
//done
