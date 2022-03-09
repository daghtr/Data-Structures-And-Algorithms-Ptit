#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		
		long b = 0;
		priority_queue<int, vector<int>, greater<int> > q;	// sap xep tu be den lon   // sau khi chen vao cung sap sep lai tu be den lon
		
		for(int i = 0 ; i < n ; i++)
		{
			int a;
			cin >> a;
			q.push(a);		// them vao hang doi uu tien
		}
		while(q.size() > 1)		// vi phai lay 2 phan tu de so sanh nen phai co it nhat 2 phan tu trong queue
		{
			int c = q.top();
			q.pop();
								// lay phan tu dau tien ra sau do xoa r lay phan tu tiep theo(thu 2) (sau do se la phan thu thu nhat)
			int d = q.top();
			q.pop();
			
			q.push(c+d);		// them soi day sau khi noi vao
			b = b + c + d;		// kqua cuoi
		}
		
		cout << b;
		cout << endl;
		
	}
	return 0;
}

//done
