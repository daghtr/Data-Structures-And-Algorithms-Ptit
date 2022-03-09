#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string m;
		cin >> m;
		if(m[0] == '0')		// ky tu 0 o dau k ma hoa dc
		{
			cout << 0 << endl;
			continue;
		}
		int n = m.length();
		int d[n+1];  
	    d[0] = 1; 
	    d[1] = 1;
	    // d[i] sp cach ma hoa den ky tu i
	    for (int i = 2 ; i <= n ; i++)
		{ 
	        d[i] = 0; 
	        if(m[i-1] > '0') 
	            d[i] = d[i-1]; 
	        if(m[i-2] == '1' ||  (m[i-2] == '2' && m[i-1] < '7')) 
	            d[i] += d[i-2]; 
	    } 
	    cout << d[n] << endl;
	}
	return 0;
}

//done
