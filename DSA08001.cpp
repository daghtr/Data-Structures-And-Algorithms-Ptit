#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a, b;
		b = 0;
		queue<int> c;
		cin >> a;
		while(a--)
		{
			int s;
			cin >> s;
			if(s == 1 )
			{
				cout << c.size();
				cout << endl;
			}
			else if(s == 2)
				c.size() > 0 ? cout << "NO\n" : cout <<"YES\n";
			else if(s == 3)
			{
				int n;
				cin >> n;
				c.push(n);
			}
			
			else if(s == 4  &&  c.size() > 0)
				c.pop();
			else if(s == 5)
				c.size() > 0  ?  cout << c.front() << endl  :  	cout << "-1\n" << endl;
			else if(s == 6)
				c.size() > 0  ?  cout << c.back() << endl	:	cout << "-1\n" << endl;
				
			b = s;	
				
		}
		if( b == 3 || b == 4)
			cout << endl;
		
	}
	
	return 0;
}

//done
