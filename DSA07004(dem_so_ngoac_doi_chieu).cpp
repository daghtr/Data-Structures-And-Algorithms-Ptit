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
		stack<char> exp;		// luu nhung dau ngoac sai
		for(int i = 0 ; i < s.size() ; i++)
		{
			if( s[i] == '('  ||  s[i] == ')'   &&  exp.size() == 0)	// exp.size() == 0 rong
				exp.push(s[i]);			// them vao stack
			else if(s[i] == ')')		// neu stack dong ngoac )
			{
				if(exp.size() > 0  &&  exp.top() == '(')		// kiem tra xem stack co phai mo ngoac hay k
					exp.pop();		// neu mo ngoac thi xoa 
				else
					exp.push(s[i]);		//neu k phai thi lai them s[i[ vao stack de chay tiep
			}	
		}
		
		// sau khi ket thuc vong lap for thi se luu lai nhung dau ngoac k dung vao stack
		
		int count1 = 0, count2 = 0;
		while(exp.size() > 0)
		{
			if(exp.top() == '(')	// dem trong stack xem co bn cai mo ngoac (		
				count1++;
			else
				count2++;			// dem bn cai dong ngoac )
			
			exp.pop();
		}
		
		int count;
			count = count1/2 + count2/2 + count2%2 + count2%2;		// count1/2 : doi chieu 1 nua mo ngoac ghep voi 1 nua mo ngoac con lai
																			// count2/2 : doi chieu 1 nua dong ngoac ghep voi 1 nua dong ngoac con lai
		cout << count ;
		cout << endl;
		
	}
	
	return 0;
	
}

//done
