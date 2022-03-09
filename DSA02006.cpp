#include<bits/stdc++.h>
using namespace std;

int a[100], b[100];
int n, k, stop = 0;

void day_con(){
	int i = n-1;
	while(b[i] == 0)
	{
		b[i] = 1;
		i--;
	}
	
	if(i < 0)
		stop = 1;
	else
		b[i] = 0;
}

int main(){
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		bool check = false;
		vector<vector<int> > c;
		stop = 0;
		
		for(int i = 0 ; i < n ; i++)
		{
			cin >> a[i];
			b[i] = 1;
		}
		sort(a, a+n);
		
		int pos=0;
		while(!stop)
		{
			int sum = 0;
			for(int i = 0 ; i < n ; i++)
				sum += a[i] * b[i];
			if(sum == k)
			{
				check = true;
				c.resize(pos + 1);
				for(int i = 0 ; i < n ; i++)	
					if(b[i])
						c[pos].push_back(a[i]);
				pos++;
			}
			day_con();
		}
		sort(c.begin(), c.end());
		
		for(int i = 0; i < c.size() ; i++)
		{
			cout << "[";
			for(int j = 0 ; j < c[i].size()-1 ; j++){
				cout << c[i][j] << " ";
			}
			cout << c[i][c[i].size()-1] << "] ";
		}	
		
		if(!check)
			cout << "-1";
		cout << endl;
	}
	return 0;
}

//done
