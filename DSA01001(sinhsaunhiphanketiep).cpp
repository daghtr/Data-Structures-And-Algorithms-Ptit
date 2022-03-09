#include<bits/stdc++.h>
using namespace std;

void xau_np_kt(void)
{
	string s;
	cin >> s;
	//xet tu cuoi xau len dau. neu chua gap so 0 thi gan la 1, nhung vi tri vau xet qua = 0
	int i = s.length() - 1;
	while(s[i] == '1'  &&  i>=0)
	{
		s[i] = '0';
		i--;
	}
	
	if(i >= 0)
	{
		s[i] = '1';
	}
	
	cout << s ;
	cout << endl;
	
}


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		xau_np_kt();
	}
	return 0;
}

//done
