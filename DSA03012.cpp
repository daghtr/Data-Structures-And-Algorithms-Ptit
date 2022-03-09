#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		int a[1000] = {0};
		int b = 0;
		
		for(int i = 0 ; i < s.size() ; i++)
		{
			a[s[i]]++;		//dem so luong phan tu xuat hien nhieu nhat luu vao b
			if(b < a[s[i]])
				b = a[s[i]];
		}
		
		if(b <= s.size()-b  &&  s.size()%2 == 0)	//neu do dai chan
			cout << "1";
		else if(b <= ((s.size()/2) + 1) &&  s.size()%2 == 1)	//neu do dai le
			cout << "1";
		else
			cout << "-1";
			
		cout << endl;
	}
	return 0;
}

// done
