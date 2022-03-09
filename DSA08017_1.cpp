#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		queue<long long> q;
		q.push(6);
		q.push(8);
		
		vector<long long> a;
		long long x = pow(10,n);
		while(!q.empty())
		{
			long long top = q.front();
			q.pop();
			
			if(top < x)
				a.push_back(top);
			if(top >= x)		// <=> top > x		// toi uu hon 0,01s
				break;
				
			q.push(top*10 + 6);
			q.push(top*10 + 8);
		}
		for(int i = a.size()-1; i >= 0; i--)
			cout << a[i] << " ";
			
		cout << endl;
	}
	
	return 0;
}

//chua sub
