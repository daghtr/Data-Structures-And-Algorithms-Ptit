#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		vector<int> a;			// de luu lai cac chu so
		while(n)		// n > 0
		{
			a.push_back(n % 10);		// lay tung chu so mot ra khoi vector
			n /= 10;
		}
		
		reverse(a.begin(), a.end());	// dao nguoc lai vi ban dau ta them tu cuoi vao
		
		int pos = a.size();
		for(int i = 0 ; i < a.size(); i++)
		{
			if(a[i] >= 2)
			{
				pos = i;
				break;
			}
		} 
		
		for(int i = pos ; i < a.size() ; i++)
			a[i] = 1;
			
		long long count = 0	;
		long long b = 1;
		for(int i = a.size()-1 ; i >= 0 ; i--)
		{
			count += a[i] * b;
			b *= 2;
		}
		
		cout << count ;
		cout << endl;
	}
	
	return 0;
}

//done
