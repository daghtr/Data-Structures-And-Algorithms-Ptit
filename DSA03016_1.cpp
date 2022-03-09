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
		while(S > 0)
		{
			D--;		// vi giam di 1 so
			if(S > 9)
			{
				stk.push(9);
				S = S - 9;
			}
			else
			{
				stk.push(S);	//phan du cua S chia du cho 9
				break;
			}
		}
		
		if(D < 0)
			cout << "-1";
		else
		{
			if(D > 0)
			{
				int a;
				a = stk.top();
				stk.pop();		//lay phan du khi s%9	stk.push(S);
				stk.push(a-1);
				while(D > 1)	// d>1 vi so tren cung phai them so 1 vao de no be nhat
				{
					stk.push(0);	// sau do moi them so 0 vao
					D--;
				}
				stk.push(1);		// them so 1 o tren cung vao
			}
			while(!stk.empty())		// neu k rong	//stk.size()>0
			{
				cout << stk.top();	// in theo thu tu tu dau -> cuoi cua stack
				stk.pop();
			}
		}
				
		cout << endl;
	}
	return 0;
}

//done
