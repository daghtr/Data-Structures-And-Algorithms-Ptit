#include<bits/stdc++.h>
using namespace std;

void stk(string exp, int n)
{
	int left = 1;
	stack<int> right;
	for(int i = 0 ; i < n ; i++)
	{
		if(exp[i] == '(')
		{
			cout << left << " ";
			right.push(left);
			left++;
		}
		else if(exp[i] == ')')
		{
			cout << right.top() << " ";
			right.pop();
		}
	}
}
int main()
{
	string exp;
	cin >> exp;
	int n = exp.size();
	stk(exp,n);
	return 0;
}
