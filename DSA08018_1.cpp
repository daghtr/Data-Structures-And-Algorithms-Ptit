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
			if(top > x)		// <=> top >= x		// do toan bo nho hon may kb
				break;
				
			q.push(top*10 + 6);
			q.push(top*10 + 8);
		}
		cout << a.size();
		cout << endl;
		for(int i = 0; i <= a.size()-1 ; i++)
			cout << a[i] << " ";
			
		cout << endl;
	}
	
	return 0;
}

//done
