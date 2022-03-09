#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	queue<int> a;
	while(t--)
	{
		string s;
		cin >> s;
		if( s == "PUSH")
		{
			int b;
			cin >> b;
			a.push(b);
		}
		else if(s == "PRINTFRONT")
			a.size() > 0	?	cout << a.front() << endl	:	cout << "NONE" << endl;
		else if(s == "POP"	&&	a.size() > 0)
			a.pop();
	}
	return 0;
}

//done
