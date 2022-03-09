#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;		// <=> int
		cin>>n;
		queue<long long> a; 
    	a.push(9); 
    	int count = 0; 
    	long long b; 
    	while(!a.empty()) 
    	{ 
        	b = a.front(); 
        	a.pop(); 
        	if (b % n != 0) 
        	{ 
            	count++; 
            	a.push(b * 10); 
           		a.push(b * 10 + 9); 
        	} 
        	
        	if(b % n == 0)
				break;
    	}
    	
    	cout << b;
    	cout << endl;
	}
	
	return 0;
	
}

//done
