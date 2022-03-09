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
		queue<long long> a;
		a.push(1);				// so ban dau la 1
		int count = 0 ; 		// bien dem
		long long b;			// int b;
		
		while(!a.empty())		// chay vong lap while cho den khi co phan tu trong hang doi(queue)
		{
			b = a.front();		// gan gia tri tra ve tiep theo trong hang doi
			a.pop();			// xoa phan tu trong hang doi
			
			if(b <= n)
			{
				count++;
				
				a.push(b*10);
				a.push(b*10 + 1);		// day vao hang doi
			}
		}
		cout << count;
		cout <<endl;
	}
	return 0;
}

//done
