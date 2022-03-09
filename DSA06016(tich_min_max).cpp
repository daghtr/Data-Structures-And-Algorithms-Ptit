#include<bits/stdc++.h>
using namespace std;

void min_max(long long a[], long long b[], long long n, long long m)
{
	long long max = a[0];
	for(int i = 1 ; i < n ; i++)
	{
		if(max < a[i])
			max = a[i];
	}
	
	long long min = b[0];
	for(int j = 1 ; j < m ; j++)
	{
		if(min > b[j])
			min = b[j];
	}
	
	cout << min * max;
	cout << endl;
}


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long a[100000], b[100000];
		long long n, m;
		cin >> n >> m;
		
		for(int i = 0 ; i < n ; i++)
			cin >> a[i];
			
		for(int j = 0 ; j < m ; j++)
			cin >> b[j];
			
		min_max(a,b,n,m);
		
		
	}
		
	return 0;
}

//done



/*	#include<bits/stdc++.h>
using namespace std;
long long a[1000005], b[1000005];
void min_max(long long a[], long long b[], long long n, long long m)
{
	long long max = a[0];
	for(int i = 1 ; i < n ; i++)
	{
		if(max < a[i])
			max = a[i];
	}
	
	long long min = b[0];
	for(int j = 1 ; j < m ; j++)
	{
		if(min > b[j])
			min = b[j];
	}
	cout << min * max;
	cout << endl;
}


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n, m;
		cin >> n >> m;
		
		for(int i = 0 ; i < n ; i++)
			cin >> a[i];
			
		for(int j = 0 ; j < m ; j++)
			cin >> b[j];
			
		min_max(a,b,n,m);
		
		
	}
		
	return 0;
}


*/
// chua sub



//  c2 

//  ^	
// ||

/*	#include<bits/stdc++.h>
using namespace std;
long long m,n,a[1000005], b[1000005];
int main(){
	int t; cin>>t;
	while(t--){
		cin>>m>>n;
		for(int i=1; i<=m; i++) cin>>a[i];
		for(int i=1; i<=n; i++) cin>>b[i];
		sort(a+1,a+m+1);
		sort(b+1,b+n+1);
		long long t=a[m]*b[1];
		cout<<t<<endl;
	}	
	return 0;
}

*/



