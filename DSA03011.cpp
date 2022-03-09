#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9+7;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		
		long long b = 0;
		priority_queue<long long, vector<long long>, greater<long long> > q;	// sap xep tu be den lon   // sau khi chen vao cung sap sep lai tu be den lon
		
		for(int i = 0 ; i < n ; i++)
		{
			long long a;
			cin >> a;
			q.push(a);		// them vao hang doi uu tien
		}
		while(q.size() > 1)		// vi phai lay 2 phan tu de so sanh nen phai co it nhat 2 phan tu trong queue
		{
			long long c = q.top();
			q.pop();
								// lay phan tu dau tien ra sau do xoa r lay phan tu tiep theo(thu 2) (sau do se la phan thu thu nhat)
			long long d = q.top();
			q.pop();
			
			q.push((c+d) % mod);		// them soi day sau khi noi vao
			b = (b + c + d) % mod;		// kqua cuoi
		}
		
		cout << b;
		cout << endl;
		
	}
	return 0;
}

//done
