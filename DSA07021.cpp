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
			
			if( s[i] == '(')		
				stk.push(i);		// them vi tri mo ngoac ( vao stack
				
			else
			{
				stk.pop();			// xoa phan tu ban dau cua cap ngoac ben tren
				if(stk.size() > 0)	// neu stack k rong
					count = max(count, i-stk.top());		// tu 0 den cai truoc cua cai ban dau da xoa ben tren   //stk.pop()
															// i la vi tri ket thuc				// max()  ->  do dai lon nhat cua day ngoac hien tai
				if(stk.size() == 0)		// neu stack k co gi thi them i vao thay the cho stack ban dau   ->  stk.push(-1);
					stk.push(i);	
					
			}
		}
		
		cout << count;
		cout << endl;
	}
	
	return 0;
}

//done
