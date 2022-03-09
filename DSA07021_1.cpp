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
		int count = 0;
		stack<int> stk;
		stk.push(-1);
		for(int i = 0 ; i < s.size() ; i++)
		{
			
			if( s[i] == '(' )		
				stk.push(i);		// them vi tri mo ngoac ( vao stack
				
			else
			{
				if(!stk.empty())
					stk.pop();
					
				if(!stk.empty())
					count = max(count, i-stk.top());	
				else
					stk.push(i);	
			}
		}
		
		cout << count;
		cout << endl;
	}
	
	return 0;
}

//done
