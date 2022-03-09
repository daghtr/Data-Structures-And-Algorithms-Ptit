#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int k;
		string a, b;
		cin >> k >> a >> b;
		while(a.length() > b.length())
			b = "0" + b;
	    while(a.length() < b.length())
			a = "0" + a;
			
	    int du = 0;
	    string s = "";
	    for(int i = a.length()-1 ; i >= 0 ; i--)
		{
	    	int x = (a[i] - '0') + (b[i] - '0') + du;
	    	if(x >= k)
			{
	    		du = 1;
	    		x -= k;
			}
			else
				du = 0;
			
			char c = '0' + x;
	    	s = c + s;
		}
		
		if(du)
			s = "1" + s;
		
	cout << s << endl;
	}
	
			
	return 0;
}
//done
