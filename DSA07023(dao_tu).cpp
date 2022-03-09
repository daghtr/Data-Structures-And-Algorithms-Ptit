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
    	stack<char> stk;
    	for(int i = s.size()-1 ; i >= 0 ; i--)
    	{
    		while(s[i] != ' '  &&  i >= 0)
			{
				stk.push(s[i]);
				i--;
			} 
			
			while(stk.size() > 0)
			{
				cout << stk.top();
				stk.pop();
			}
			
			if(s[i] == ' ')
				cout << s[i];
		}
		
		cout << endl;
	}
    
     
    return 0;
}

//done
