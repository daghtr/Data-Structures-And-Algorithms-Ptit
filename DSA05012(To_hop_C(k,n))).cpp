// tinh C(k,n);
 
#include<bits/stdc++.h>
using namespace std;

const long long modulo = 1e9+7;
long long a[1001][1001];
int main(){
	
    int t;
    cin >> t;
    
    for(int i = 0 ; i <= 1000 ; i++)	// k => i
    {
    	for(int j = 0 ; j <= 1000 ; j++) // n => j
    	{
    		if(i == j || i == 0)
    			a[i][j] = 1;
    		else
    			a[i][j] = a[i][j-1] +  a[i-1][j-1];  //C(k,n) = C(k,n-1) + C(k-1,n-1)
    		a[i][j] = a[i][j] % modulo;
		}
	}
    while(t--)
    {
    	int n,k;
    	cin >> n >> k;
    	
    	cout << a[k][n];
    	cout << endl;
	}
    return 0;
}

//done
