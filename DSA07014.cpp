#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		stack<int> stk;
		
		for(int i = s.size()-1 ; i >= 0 ; i--)		// chay tu cuoi lai
		{
			if(s[i] >= '0'  &&  s[i] <= '9')		// neu s[i] tu 0->9
				stk.push(int (s[i] - '0'));			//them vao stack 1 so nguyen s[i] -  ky tu '0'
			else
			{
				int a,b;
				a = stk.top();
				stk.pop();
				b = stk.top();
				stk.pop();
				
				if(s[i] == '+')
					stk.push(a+b);
				if(s[i] == '-')
					stk.push(a-b);
				if(s[i] == '*')
					stk.push(a*b);
				if(s[i] == '/')
					stk.push(a/b);
			}
		}
		
		cout << stk.top();		// in ra phan tu dau tien cua ngan xep
		cout << endl;
	}
	return 0;
}


//done
