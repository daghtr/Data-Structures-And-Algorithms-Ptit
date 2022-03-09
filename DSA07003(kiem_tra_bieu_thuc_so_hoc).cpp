#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; 
	cin >> t;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin, s);
		bool check;
		stack<char> stk;
		for(int i = 0 ; i < s.size() ; i++)
		{
			if(s[i] == ')')
			{
				check = true;
				char top = stk.top();
				stk.pop();
				while(top != '(')
				{
					if(top == '+' || top == '-' || top =='*' || top == '/')
						check = false;
						top = stk.top();
						stk.pop();
				}
				
				if(check)
					break;
			}
			
			else
				stk.push(s[i]);
		}
		
		if(check)
			cout << "Yes";
		else
			cout << "No";
			
		cout << endl;
	}
	
	return 0;
}

//done
