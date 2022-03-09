#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int S, D;
		cin >> S >> D;
		stack<int> stk;
		for(int i = 1 ; i <= D ; i++)
		{
			if(S > 9)
			{
				stk.push(9);
				S = S - 9;
			}
			
			else if(i == D)
			{
				stk.push(S);
				S = 0;
			}
			
			else if(S == 1)
			{
				if(i != D)
					stk.push(0);
			}
			
			else
			{
				stk.push(S-1);
				S = 1;
			}
		}
		
		if(S > 0)
			cout << "-1";
		
		else while(!stk.empty())
		{
				cout << stk.top();
				stk.pop();
		}
		
		
		cout << endl;
	}
	return 0;
}

//done 
