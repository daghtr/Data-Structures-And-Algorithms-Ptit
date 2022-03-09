#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	deque<int> a;
	while(t--)
	{
		string s;
		cin >> s;
		if(s == "PUSHBACK")
		{
			int b;
			cin >> b;
			a.push_back(b);
		}
		else if(s == "PUSHFRONT")
		{
			int b;
			cin >> b;
			a.push_front(b);
		}
		else if(s == "PRINTFRONT")
			a.size() > 0	?	cout << a.front() << endl	:	cout << "NONE" << endl;
		else if(s == "PRINTBACK")
			a.size() > 0	?	cout << a.back() << endl	:	cout << "NONE" << endl;
		else if(s == "POPFRONT"  &&	 a.size() > 0)
			a.pop_front();
		else if(s == "POPBACK"	&&	a.size() > 0)
			a.pop_back(); 
	}
	return 0;
}

//done
