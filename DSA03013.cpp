#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int D;
		cin >> D;
		string s;
		cin >> s;
		int a[10000] = {0};
		int range = 0;
		for(int i = 0 ; i < s.size() ; i++)
		{
			a[s[i]]++;
			if(range < a[s[i]])
				range = a[s[i]];
		}
		// (range - 1)*(D-1) -> so luong ky tu phai co it nhat de chen vao giua
		// (s.size() - range) -> so ky tu khac ky tu max (thuc) ma no co
		if((range - 1)*(D-1) > (s.size() - range))
			cout << "-1";
		else
			cout << "1";
			
		cout << endl;
	}
	return 0;
}

//done
