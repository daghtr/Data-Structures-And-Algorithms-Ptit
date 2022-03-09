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
		stack<int> a;
		stack<char> c;
		for(int i = 0 ; s[i] ; i++)
		{
			if(s[i] >= '0'  &&  s[i] <= '9')
				 a.push(s[i] - '0');
			else
			{
				if(s[i] != ']')
					c.push(s[i]);
				else
				{
					string s1="";
					while(c.top() != '[')
					{
						s1 = c.top() + s1;
						c.pop();
					}
					c.pop();
					for(int i = 1 ; i <= a.top() ; i++)
					{
						for(int j = 0 ; s1[j] ; j++)
							c.push(s1[j]);
					}
					a.pop();
				}
			}
		}
		string s2 = "";
		while(!c.empty())
		{
			s2 = c.top() + s2;
			c.pop();
		}
		cout << s2 << endl;
	}
	return 0;
}

//false