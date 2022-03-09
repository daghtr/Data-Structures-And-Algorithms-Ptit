// hoan vi nguoc

#include <bits/stdc++.h> 
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--)
	{
		int n, a[100];
		cin >> n;
		for(int i = 1; i <= n ; i++){
			a[i] = n-i+1;
			cout << a[i]; 
		} 
		
		cout << " ";
	 
		for(int i = n ; i > 1 ; i--){
			if(a[i] < a[i-1])
			{
			
				int j = i-1;
			
				int k = i;
			
				int dau_tien_max = a[k];
				for(int h = k; h <= n ; h++)
				{
					if(a[h] > dau_tien_max  &&  a[h] < a[j])
					{
						dau_tien_max = a[h];
						k = h; 
					} 
				} 
			
				swap(a[j], a[k]);
			 
				int m = n; 
				for(int h = i; h <= m; h++)
				{
					swap(a[h], a[m]); 
					m--; 
				}  
			
				
				for(int h = 1; h <= n; h++){
					cout << a[h]; 
				} 
			
				i = n+1;
				cout << " "; 
			} 
		} 
		cout << endl; 
	} 
	return 0; 
}

// done
